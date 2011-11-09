/*
 *	server/zone/objects/tangible/fishing/FishObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "FishObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/ZoneServer.h"

/*
 *	FishObjectStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_SETATTRIBUTES__STRING_STRING_STRING_FLOAT_,RPC_FILLOBJECTMENURESPONSE__OBJECTMENURESPONSE_CREATUREOBJECT_,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_FILLATTRIBUTELIST__ATTRIBUTELISTMESSAGE_CREATUREOBJECT_,RPC_FILET__CREATUREOBJECT_};

FishObject::FishObject() : TangibleObject(DummyConstructorParameter::instance()) {
	FishObjectImplementation* _implementation = new FishObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

FishObject::FishObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

FishObject::~FishObject() {
}



void FishObject::initializeTransientMembers() {
	FishObjectImplementation* _implementation = static_cast<FishObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void FishObject::setAttributes(const String& playerName, const String& terrainN, String& timestamp, float fishLength) {
	FishObjectImplementation* _implementation = static_cast<FishObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETATTRIBUTES__STRING_STRING_STRING_FLOAT_);
		method.addAsciiParameter(playerName);
		method.addAsciiParameter(terrainN);
		method.addAsciiParameter(timestamp);
		method.addFloatParameter(fishLength);

		method.executeWithVoidReturn();
	} else
		_implementation->setAttributes(playerName, terrainN, timestamp, fishLength);
}

void FishObject::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	FishObjectImplementation* _implementation = static_cast<FishObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_FILLOBJECTMENURESPONSE__OBJECTMENURESPONSE_CREATUREOBJECT_);
		method.addObjectParameter(menuResponse);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->fillObjectMenuResponse(menuResponse, player);
}

int FishObject::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	FishObjectImplementation* _implementation = static_cast<FishObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

void FishObject::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	FishObjectImplementation* _implementation = static_cast<FishObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_FILLATTRIBUTELIST__ATTRIBUTELISTMESSAGE_CREATUREOBJECT_);
		method.addObjectParameter(msg);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->fillAttributeList(msg, object);
}

void FishObject::filet(CreatureObject* player) {
	FishObjectImplementation* _implementation = static_cast<FishObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_FILET__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->filet(player);
}

DistributedObjectServant* FishObject::_getImplementation() {

	_updated = true;
	return _impl;
}

void FishObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	FishObjectImplementation
 */

FishObjectImplementation::FishObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


FishObjectImplementation::~FishObjectImplementation() {
}


void FishObjectImplementation::finalize() {
}

void FishObjectImplementation::_initializeImplementation() {
	_setClassHelper(FishObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void FishObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<FishObject*>(stub);
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* FishObjectImplementation::_getStub() {
	return _this;
}

FishObjectImplementation::operator const FishObject*() {
	return _this;
}

void FishObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void FishObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void FishObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void FishObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void FishObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void FishObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void FishObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void FishObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("FishObject");

}

void FishObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(FishObjectImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool FishObjectImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TangibleObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "player") {
		TypeInfo<String >::parseFromBinaryStream(&player, stream);
		return true;
	}

	if (_name == "zoneName") {
		TypeInfo<String >::parseFromBinaryStream(&zoneName, stream);
		return true;
	}

	if (_name == "timeCaught") {
		TypeInfo<String >::parseFromBinaryStream(&timeCaught, stream);
		return true;
	}

	if (_name == "length") {
		TypeInfo<float >::parseFromBinaryStream(&length, stream);
		return true;
	}


	return false;
}

void FishObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = FishObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int FishObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "player";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&player, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "zoneName";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&zoneName, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "timeCaught";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&timeCaught, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "length";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&length, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 4 + TangibleObjectImplementation::writeObjectMembers(stream);
}

FishObjectImplementation::FishObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/fishing/FishObject.idl():  		Logger.setLoggingName("FishObject");
	Logger::setLoggingName("FishObject");
	// server/zone/objects/tangible/fishing/FishObject.idl():  		length = 0.0;
	length = 0.0;
}

void FishObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/fishing/FishObject.idl():  		super.initializeTransientMembers();
	TangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/fishing/FishObject.idl():  		Logger.setLoggingName("FishObject");
	Logger::setLoggingName("FishObject");
}

void FishObjectImplementation::setAttributes(const String& playerName, const String& terrainN, String& timestamp, float fishLength) {
	// server/zone/objects/tangible/fishing/FishObject.idl():  		player = playerName;
	player = playerName;
	// server/zone/objects/tangible/fishing/FishObject.idl():  		zoneName = terrainN;
	zoneName = terrainN;
	// server/zone/objects/tangible/fishing/FishObject.idl():  		timeCaught = timestamp;
	timeCaught = timestamp;
	// server/zone/objects/tangible/fishing/FishObject.idl():  		length = fishLength;
	length = fishLength;
}

/*
 *	FishObjectAdapter
 */

FishObjectAdapter::FishObjectAdapter(FishObject* obj) : TangibleObjectAdapter(obj) {
}

Packet* FishObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_SETATTRIBUTES__STRING_STRING_STRING_FLOAT_:
		setAttributes(inv->getAsciiParameter(_param0_setAttributes__String_String_String_float_), inv->getAsciiParameter(_param1_setAttributes__String_String_String_float_), inv->getAsciiParameter(_param2_setAttributes__String_String_String_float_), inv->getFloatParameter());
		break;
	case RPC_FILLOBJECTMENURESPONSE__OBJECTMENURESPONSE_CREATUREOBJECT_:
		fillObjectMenuResponse(static_cast<ObjectMenuResponse*>(inv->getObjectParameter()), static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getByteParameter()));
		break;
	case RPC_FILLATTRIBUTELIST__ATTRIBUTELISTMESSAGE_CREATUREOBJECT_:
		fillAttributeList(static_cast<AttributeListMessage*>(inv->getObjectParameter()), static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	case RPC_FILET__CREATUREOBJECT_:
		filet(static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void FishObjectAdapter::initializeTransientMembers() {
	(static_cast<FishObject*>(stub))->initializeTransientMembers();
}

void FishObjectAdapter::setAttributes(const String& playerName, const String& terrainN, String& timestamp, float fishLength) {
	(static_cast<FishObject*>(stub))->setAttributes(playerName, terrainN, timestamp, fishLength);
}

void FishObjectAdapter::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	(static_cast<FishObject*>(stub))->fillObjectMenuResponse(menuResponse, player);
}

int FishObjectAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<FishObject*>(stub))->handleObjectMenuSelect(player, selectedID);
}

void FishObjectAdapter::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	(static_cast<FishObject*>(stub))->fillAttributeList(msg, object);
}

void FishObjectAdapter::filet(CreatureObject* player) {
	(static_cast<FishObject*>(stub))->filet(player);
}

/*
 *	FishObjectHelper
 */

FishObjectHelper* FishObjectHelper::staticInitializer = FishObjectHelper::instance();

FishObjectHelper::FishObjectHelper() {
	className = "FishObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void FishObjectHelper::finalizeHelper() {
	FishObjectHelper::finalize();
}

DistributedObject* FishObjectHelper::instantiateObject() {
	return new FishObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* FishObjectHelper::instantiateServant() {
	return new FishObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* FishObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new FishObjectAdapter(static_cast<FishObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

