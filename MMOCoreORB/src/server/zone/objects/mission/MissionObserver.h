/*
 *	server/zone/objects/mission/MissionObserver.h generated by engine3 IDL compiler 0.60
 */

#ifndef MISSIONOBSERVER_H_
#define MISSIONOBSERVER_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace mission {

class MissionObject;

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class MissionObjective;

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

#include "engine/util/Observer.h"

#include "engine/util/Observable.h"

#include "engine/log/Logger.h"

namespace server {
namespace zone {
namespace objects {
namespace mission {

class MissionObserver : public Observer {
public:
	MissionObserver(MissionObjective* objective);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void destroyObjectFromDatabase();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	MissionObserver(DummyConstructorParameter* param);

	virtual ~MissionObserver();

	friend class MissionObserverHelper;
};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class MissionObserverImplementation : public ObserverImplementation, public Logger {
protected:
	ManagedWeakReference<MissionObjective* > missionObjective;

public:
	MissionObserverImplementation(MissionObjective* objective);

	MissionObserverImplementation(DummyConstructorParameter* param);

	virtual int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	virtual void destroyObjectFromDatabase();

	WeakReference<MissionObserver*> _this;

	operator const MissionObserver*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~MissionObserverImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const String& name);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class MissionObserver;
};

class MissionObserverAdapter : public ObserverAdapter {
public:
	MissionObserverAdapter(MissionObserver* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	void destroyObjectFromDatabase();

};

class MissionObserverHelper : public DistributedObjectClassHelper, public Singleton<MissionObserverHelper> {
	static MissionObserverHelper* staticInitializer;

public:
	MissionObserverHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<MissionObserverHelper>;
};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

#endif /*MISSIONOBSERVER_H_*/
