/*
 *	server/zone/managers/objectcontroller/ObjectController.h generated by engine3 IDL compiler 0.60
 */

#ifndef OBJECTCONTROLLER_H_
#define OBJECTCONTROLLER_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace managers {
namespace objectcontroller {
namespace command {

class CommandList;

} // namespace command
} // namespace objectcontroller
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::objectcontroller::command;

namespace server {
namespace zone {
namespace managers {
namespace objectcontroller {
namespace command {

class CommandConfigManager;

} // namespace command
} // namespace objectcontroller
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::objectcontroller::command;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace commands {

class QueueCommand;

} // namespace commands
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::commands;

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneProcessServer;

} // namespace zone
} // namespace server

using namespace server::zone;

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

#include "engine/core/ManagedService.h"

#include "engine/lua/Lua.h"

#include "engine/log/Logger.h"

namespace server {
namespace zone {
namespace managers {
namespace objectcontroller {

class ObjectController : public ManagedService {
public:
	ObjectController(ZoneProcessServer* srv);

	void loadCommands();

	bool transferObject(SceneObject* objectToTransfer, SceneObject* destinationObject, int containmentType, bool notifyClient = false);

	float activateCommand(CreatureObject* object, unsigned int actionCRC, unsigned int actionCount, unsigned long long targetID, const UnicodeString& arguments);

	void addQueueCommand(QueueCommand* command);

	QueueCommand* getQueueCommand(const String& name);

	QueueCommand* getQueueCommand(unsigned int crc);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ObjectController(DummyConstructorParameter* param);

	virtual ~ObjectController();

	friend class ObjectControllerHelper;
};

} // namespace objectcontroller
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::objectcontroller;

namespace server {
namespace zone {
namespace managers {
namespace objectcontroller {

class ObjectControllerImplementation : public ManagedServiceImplementation, public Logger {
	ManagedReference<ZoneProcessServer* > server;

	Reference<CommandConfigManager* > configManager;

	Reference<CommandList* > queueCommands;

public:
	ObjectControllerImplementation(ZoneProcessServer* srv);

	ObjectControllerImplementation(DummyConstructorParameter* param);

	void finalize();

	void loadCommands();

	bool transferObject(SceneObject* objectToTransfer, SceneObject* destinationObject, int containmentType, bool notifyClient = false);

	float activateCommand(CreatureObject* object, unsigned int actionCRC, unsigned int actionCount, unsigned long long targetID, const UnicodeString& arguments);

	void addQueueCommand(QueueCommand* command);

	QueueCommand* getQueueCommand(const String& name);

	QueueCommand* getQueueCommand(unsigned int crc);

	WeakReference<ObjectController*> _this;

	operator const ObjectController*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ObjectControllerImplementation();

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

	friend class ObjectController;
};

class ObjectControllerAdapter : public ManagedServiceAdapter {
public:
	ObjectControllerAdapter(ObjectController* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void finalize();

	void loadCommands();

	bool transferObject(SceneObject* objectToTransfer, SceneObject* destinationObject, int containmentType, bool notifyClient);

	float activateCommand(CreatureObject* object, unsigned int actionCRC, unsigned int actionCount, unsigned long long targetID, const UnicodeString& arguments);

protected:
	UnicodeString _param4_activateCommand__CreatureObject_int_int_long_UnicodeString_;
};

class ObjectControllerHelper : public DistributedObjectClassHelper, public Singleton<ObjectControllerHelper> {
	static ObjectControllerHelper* staticInitializer;

public:
	ObjectControllerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ObjectControllerHelper>;
};

} // namespace objectcontroller
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::objectcontroller;

#endif /*OBJECTCONTROLLER_H_*/
