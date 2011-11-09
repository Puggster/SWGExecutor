/*
 *	server/zone/objects/tangible/terminal/cloning/CloningTerminal.h generated by engine3 IDL compiler 0.60
 */

#ifndef CLONINGTERMINAL_H_
#define CLONINGTERMINAL_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class TangibleObject;

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

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

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace templates {

class SharedObjectTemplate;

} // namespace templates
} // namespace zone
} // namespace server

using namespace server::zone::templates;

namespace server {
namespace zone {
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

#include "server/zone/objects/tangible/terminal/Terminal.h"

#include "engine/lua/LuaObject.h"

#include "system/util/VectorMap.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace elevator {

class CloningTerminal : public Terminal {
public:
	CloningTerminal();

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	CloningTerminal(DummyConstructorParameter* param);

	virtual ~CloningTerminal();

	friend class CloningTerminalHelper;
};

} // namespace elevator
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::elevator;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace elevator {

class CloningTerminalImplementation : public TerminalImplementation {

public:
	CloningTerminalImplementation();

	CloningTerminalImplementation(DummyConstructorParameter* param);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	WeakReference<CloningTerminal*> _this;

	operator const CloningTerminal*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~CloningTerminalImplementation();

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

	friend class CloningTerminal;
};

class CloningTerminalAdapter : public TerminalAdapter {
public:
	CloningTerminalAdapter(CloningTerminal* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

};

class CloningTerminalHelper : public DistributedObjectClassHelper, public Singleton<CloningTerminalHelper> {
	static CloningTerminalHelper* staticInitializer;

public:
	CloningTerminalHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CloningTerminalHelper>;
};

} // namespace elevator
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::elevator;

#endif /*CLONINGTERMINAL_H_*/
