/*
 *	server/zone/objects/tangible/wearables/ArmorObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef ARMOROBJECT_H_
#define ARMOROBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace manufactureschematic {

class ManufactureSchematic;

} // namespace manufactureschematic
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::manufactureschematic;

#include "server/zone/objects/tangible/wearables/WearableObject.h"

#include "engine/lua/LuaObject.h"

#include "system/util/SortedVector.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace wearables {

class ArmorObject : public WearableObject {
public:
	static const int LIGHT = 0x1;

	static const int MEDIUM = 0x2;

	static const int HEAVY = 0x3;

	ArmorObject();

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void updateCraftingValues(ManufactureSchematic* schematic);

	bool isSpecial(int type);

	bool isVulnerable(int type);

	bool isArmorObject();

	void setRating(int rate);

	int getRating();

	float getKinetic();

	void setKinetic(float value);

	float getEnergy();

	void setEnergy(float value);

	float getElectricity();

	void setElectricity(float value);

	float getStun();

	void setStun(float value);

	float getBlast();

	void setBlast(float value);

	float getHeat();

	void setHeat(float value);

	float getCold();

	void setCold(float value);

	float getAcid();

	void setAcid(float value);

	float getLightSaber();

	void setLightSaber(float value);

	int getHealthEncumbrance();

	void setHealthEncumbrance(int encumber);

	int getActionEncumbrance();

	void setActionEncumbrance(int encumber);

	int getMindEncumbrance();

	void setMindEncumbrance(int encumber);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ArmorObject(DummyConstructorParameter* param);

	virtual ~ArmorObject();

	friend class ArmorObjectHelper;
};

} // namespace wearables
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::wearables;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace wearables {

class ArmorObjectImplementation : public WearableObjectImplementation {
protected:
	int healthEncumbrance;

	int actionEncumbrance;

	int mindEncumbrance;

	int rating;

	float kinetic;

	float energy;

	float electricity;

	float stun;

	float blast;

	float heat;

	float cold;

	float acid;

	float lightSaber;

	int specialResists;

	int vulnerabilites;

	float specialBase;

public:
	static const int LIGHT = 0x1;

	static const int MEDIUM = 0x2;

	static const int HEAVY = 0x3;

	ArmorObjectImplementation();

	ArmorObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void updateCraftingValues(ManufactureSchematic* schematic);

private:
	void calculateSpecialProtection(ManufactureSchematic* schematic);

	void setProtection(ManufactureSchematic* schematic, int type, float base);

	String getStringType(int type);

	void setProtectionValue(int type, float value);

public:
	bool isSpecial(int type);

	bool isVulnerable(int type);

	bool isArmorObject();

	void setRating(int rate);

	int getRating();

	float getKinetic();

	void setKinetic(float value);

	float getEnergy();

	void setEnergy(float value);

	float getElectricity();

	void setElectricity(float value);

	float getStun();

	void setStun(float value);

	float getBlast();

	void setBlast(float value);

	float getHeat();

	void setHeat(float value);

	float getCold();

	void setCold(float value);

	float getAcid();

	void setAcid(float value);

	float getLightSaber();

	void setLightSaber(float value);

	int getHealthEncumbrance();

	void setHealthEncumbrance(int encumber);

	int getActionEncumbrance();

	void setActionEncumbrance(int encumber);

	int getMindEncumbrance();

	void setMindEncumbrance(int encumber);

	WeakReference<ArmorObject*> _this;

	operator const ArmorObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ArmorObjectImplementation();

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

	friend class ArmorObject;
};

class ArmorObjectAdapter : public WearableObjectAdapter {
public:
	ArmorObjectAdapter(ArmorObject* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void updateCraftingValues(ManufactureSchematic* schematic);

	bool isSpecial(int type);

	bool isVulnerable(int type);

	bool isArmorObject();

	void setRating(int rate);

	int getRating();

	float getKinetic();

	void setKinetic(float value);

	float getEnergy();

	void setEnergy(float value);

	float getElectricity();

	void setElectricity(float value);

	float getStun();

	void setStun(float value);

	float getBlast();

	void setBlast(float value);

	float getHeat();

	void setHeat(float value);

	float getCold();

	void setCold(float value);

	float getAcid();

	void setAcid(float value);

	float getLightSaber();

	void setLightSaber(float value);

	int getHealthEncumbrance();

	void setHealthEncumbrance(int encumber);

	int getActionEncumbrance();

	void setActionEncumbrance(int encumber);

	int getMindEncumbrance();

	void setMindEncumbrance(int encumber);

};

class ArmorObjectHelper : public DistributedObjectClassHelper, public Singleton<ArmorObjectHelper> {
	static ArmorObjectHelper* staticInitializer;

public:
	ArmorObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ArmorObjectHelper>;
};

} // namespace wearables
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::wearables;

#endif /*ARMOROBJECT_H_*/
