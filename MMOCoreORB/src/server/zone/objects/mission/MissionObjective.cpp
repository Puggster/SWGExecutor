/*
 *	server/zone/objects/mission/MissionObjective.cpp generated by engine3 IDL compiler 0.60
 */

#include "MissionObjective.h"

#include "server/zone/objects/mission/MissionObject.h"

#include "server/zone/objects/mission/MissionObserver.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	MissionObjectiveStub
 */

enum {RPC_DESTROYOBJECTFROMDATABASE__ = 6,RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_,RPC_ACTIVATE__,RPC_ABORT__,RPC_COMPLETE__,RPC_GETMISSIONOBJECT__,RPC_GETOBJECTIVETYPE__,RPC_GETPLAYEROWNER__};

MissionObjective::MissionObjective(MissionObject* parent) : ManagedObject(DummyConstructorParameter::instance()) {
	MissionObjectiveImplementation* _implementation = new MissionObjectiveImplementation(parent);
	_impl = _implementation;
	_impl->_setStub(this);
}

MissionObjective::MissionObjective(DummyConstructorParameter* param) : ManagedObject(param) {
}

MissionObjective::~MissionObjective() {
}



void MissionObjective::destroyObjectFromDatabase() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYOBJECTFROMDATABASE__);

		method.executeWithVoidReturn();
	} else
		_implementation->destroyObjectFromDatabase();
}

int MissionObjective::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_);
		method.addObjectParameter(observer);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

void MissionObjective::activate() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATE__);

		method.executeWithVoidReturn();
	} else
		_implementation->activate();
}

void MissionObjective::abort() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ABORT__);

		method.executeWithVoidReturn();
	} else
		_implementation->abort();
}

void MissionObjective::complete() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_COMPLETE__);

		method.executeWithVoidReturn();
	} else
		_implementation->complete();
}

MissionObject* MissionObjective::getMissionObject() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMISSIONOBJECT__);

		return static_cast<MissionObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->getMissionObject();
}

unsigned int MissionObjective::getObjectiveType() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETOBJECTIVETYPE__);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getObjectiveType();
}

CreatureObject* MissionObjective::getPlayerOwner() {
	MissionObjectiveImplementation* _implementation = static_cast<MissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPLAYEROWNER__);

		return static_cast<CreatureObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->getPlayerOwner();
}

DistributedObjectServant* MissionObjective::_getImplementation() {

	_updated = true;
	return _impl;
}

void MissionObjective::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	MissionObjectiveImplementation
 */

MissionObjectiveImplementation::MissionObjectiveImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


MissionObjectiveImplementation::~MissionObjectiveImplementation() {
}


void MissionObjectiveImplementation::finalize() {
}

void MissionObjectiveImplementation::_initializeImplementation() {
	_setClassHelper(MissionObjectiveHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void MissionObjectiveImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<MissionObjective*>(stub);
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* MissionObjectiveImplementation::_getStub() {
	return _this;
}

MissionObjectiveImplementation::operator const MissionObjective*() {
	return _this;
}

void MissionObjectiveImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void MissionObjectiveImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void MissionObjectiveImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void MissionObjectiveImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void MissionObjectiveImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void MissionObjectiveImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void MissionObjectiveImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void MissionObjectiveImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("MissionObjective");

}

void MissionObjectiveImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(MissionObjectiveImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool MissionObjectiveImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ManagedObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "observers") {
		TypeInfo<SortedVector<ManagedReference<MissionObserver* > > >::parseFromBinaryStream(&observers, stream);
		return true;
	}

	if (_name == "mission") {
		TypeInfo<ManagedWeakReference<MissionObject* > >::parseFromBinaryStream(&mission, stream);
		return true;
	}

	if (_name == "objectiveType") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&objectiveType, stream);
		return true;
	}


	return false;
}

void MissionObjectiveImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = MissionObjectiveImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int MissionObjectiveImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "observers";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<SortedVector<ManagedReference<MissionObserver* > > >::toBinaryStream(&observers, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "mission";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<MissionObject* > >::toBinaryStream(&mission, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "objectiveType";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&objectiveType, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 3 + ManagedObjectImplementation::writeObjectMembers(stream);
}

MissionObjectiveImplementation::MissionObjectiveImplementation(MissionObject* parent) {
	_initializeImplementation();
	// server/zone/objects/mission/MissionObjective.idl():  		mission = parent;
	mission = parent;
	// server/zone/objects/mission/MissionObjective.idl():  		Logger.setLoggingName("MissionObjective");
	Logger::setLoggingName("MissionObjective");
}

int MissionObjectiveImplementation::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	// server/zone/objects/mission/MissionObjective.idl():  		return 1;
	return 1;
}

void MissionObjectiveImplementation::activate() {
}

void MissionObjectiveImplementation::abort() {
}

void MissionObjectiveImplementation::complete() {
}

MissionObject* MissionObjectiveImplementation::getMissionObject() {
	// server/zone/objects/mission/MissionObjective.idl():  		return mission;
	return mission;
}

unsigned int MissionObjectiveImplementation::getObjectiveType() {
	// server/zone/objects/mission/MissionObjective.idl():  		return objectiveType;
	return objectiveType;
}

/*
 *	MissionObjectiveAdapter
 */

MissionObjectiveAdapter::MissionObjectiveAdapter(MissionObjective* obj) : ManagedObjectAdapter(obj) {
}

Packet* MissionObjectiveAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_DESTROYOBJECTFROMDATABASE__:
		destroyObjectFromDatabase();
		break;
	case RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_:
		resp->insertSignedInt(notifyObserverEvent(static_cast<MissionObserver*>(inv->getObjectParameter()), inv->getUnsignedIntParameter(), static_cast<Observable*>(inv->getObjectParameter()), static_cast<ManagedObject*>(inv->getObjectParameter()), inv->getSignedLongParameter()));
		break;
	case RPC_ACTIVATE__:
		activate();
		break;
	case RPC_ABORT__:
		abort();
		break;
	case RPC_COMPLETE__:
		complete();
		break;
	case RPC_GETMISSIONOBJECT__:
		resp->insertLong(getMissionObject()->_getObjectID());
		break;
	case RPC_GETOBJECTIVETYPE__:
		resp->insertInt(getObjectiveType());
		break;
	case RPC_GETPLAYEROWNER__:
		resp->insertLong(getPlayerOwner()->_getObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void MissionObjectiveAdapter::destroyObjectFromDatabase() {
	(static_cast<MissionObjective*>(stub))->destroyObjectFromDatabase();
}

int MissionObjectiveAdapter::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return (static_cast<MissionObjective*>(stub))->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

void MissionObjectiveAdapter::activate() {
	(static_cast<MissionObjective*>(stub))->activate();
}

void MissionObjectiveAdapter::abort() {
	(static_cast<MissionObjective*>(stub))->abort();
}

void MissionObjectiveAdapter::complete() {
	(static_cast<MissionObjective*>(stub))->complete();
}

MissionObject* MissionObjectiveAdapter::getMissionObject() {
	return (static_cast<MissionObjective*>(stub))->getMissionObject();
}

unsigned int MissionObjectiveAdapter::getObjectiveType() {
	return (static_cast<MissionObjective*>(stub))->getObjectiveType();
}

CreatureObject* MissionObjectiveAdapter::getPlayerOwner() {
	return (static_cast<MissionObjective*>(stub))->getPlayerOwner();
}

/*
 *	MissionObjectiveHelper
 */

MissionObjectiveHelper* MissionObjectiveHelper::staticInitializer = MissionObjectiveHelper::instance();

MissionObjectiveHelper::MissionObjectiveHelper() {
	className = "MissionObjective";

	Core::getObjectBroker()->registerClass(className, this);
}

void MissionObjectiveHelper::finalizeHelper() {
	MissionObjectiveHelper::finalize();
}

DistributedObject* MissionObjectiveHelper::instantiateObject() {
	return new MissionObjective(DummyConstructorParameter::instance());
}

DistributedObjectServant* MissionObjectiveHelper::instantiateServant() {
	return new MissionObjectiveImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* MissionObjectiveHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new MissionObjectiveAdapter(static_cast<MissionObjective*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

