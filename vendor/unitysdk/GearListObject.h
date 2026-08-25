#pragma once
#include "unitysdk.h"

class InventoryFilterBase;
namespace MX::GameLogic::DBModel { class GearDB; }
namespace MX::Logic::Data { class GearSetting; }
class CharacterObject;

#define GEARLISTOBJECT_GET_FILTEROPTION_OFFSET UNITYSDK_OFFSET(0x1E4C560)
#define GEARLISTOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1E4C5B0)
#define GEARLISTOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1E4C640)
#define GEARLISTOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1E4C820)
#define GEARLISTOBJECT_HASGEAR_OFFSET UNITYSDK_OFFSET(0x1E4CAE0)
#define GEARLISTOBJECT_ADD_OFFSET UNITYSDK_OFFSET(0x1E4CA00)
#define GEARLISTOBJECT_GETGEARSETTING_OFFSET UNITYSDK_OFFSET(0x1E4CB30)
#define GEARLISTOBJECT_GETGEARSETTING_OFFSET UNITYSDK_OFFSET(0x1E4CB80)
#define GEARLISTOBJECT_HASLEVELDATA_OFFSET UNITYSDK_OFFSET(0x1E4CD30)
#define GEARLISTOBJECT_GETLEVELEXP_OFFSET UNITYSDK_OFFSET(0x1E4CDD0)
#define GEARLISTOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E4CE70)

	inline static constexpr unsigned int GearListObject_TypeDefinitionIndex = 1692;

	class GearListObject : public <OnState>d__4
	{
	public:
		InventoryFilterBase* get_FilterOption()
		{
			return ((InventoryFilterBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEARLISTOBJECT_GET_FILTEROPTION_OFFSET))(nullptr);
		}

		::System::Void Sync(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GEARLISTOBJECT_SYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sync(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GEARLISTOBJECT_SYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::GearDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::GearDB*, ::PVOID))((::PBYTE)hIl2Cpp + GEARLISTOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasGear(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + GEARLISTOBJECT_HASGEAR_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::MX::GameLogic::DBModel::GearDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::GearDB*, ::PVOID))((::PBYTE)hIl2Cpp + GEARLISTOBJECT_ADD_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::GearSetting* GetGearSetting(CharacterObject* arg)
		{
			return ((::MX::Logic::Data::GearSetting*(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + GEARLISTOBJECT_GETGEARSETTING_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::GearSetting* GetGearSetting(CharacterObject* arg, ::System::Int32 arg2)
		{
			return ((::MX::Logic::Data::GearSetting*(*)(CharacterObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GEARLISTOBJECT_GETGEARSETTING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLevelData(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GEARLISTOBJECT_HASLEVELDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetLevelExp(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GEARLISTOBJECT_GETLEVELEXP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEARLISTOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};

