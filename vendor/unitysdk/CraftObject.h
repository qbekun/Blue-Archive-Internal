#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ShiftingCraftInfoDB; }
namespace MX::GameLogic::DBModel { class CraftInfoDB; }
namespace MX::GameLogic::DBModel { class CraftPresetSlotDB; }

#define CRAFTOBJECT_GET_CRAFTINFOS_OFFSET UNITYSDK_OFFSET(0x1D0CD80)
#define CRAFTOBJECT_SET_CRAFTINFOS_OFFSET UNITYSDK_OFFSET(0x1D0CD90)
#define CRAFTOBJECT_GET_SHIFTINGCRAFTINFOS_OFFSET UNITYSDK_OFFSET(0x1D0CDA0)
#define CRAFTOBJECT_SET_SHIFTINGCRAFTINFOS_OFFSET UNITYSDK_OFFSET(0x1D0CDB0)
#define CRAFTOBJECT_GET_PRESETSLOTDBS_OFFSET UNITYSDK_OFFSET(0x1D0CDC0)
#define CRAFTOBJECT_SET_PRESETSLOTDBS_OFFSET UNITYSDK_OFFSET(0x1D0CDD0)
#define CRAFTOBJECT_SYNCNORMAL_OFFSET UNITYSDK_OFFSET(0x1D0CDE0)
#define CRAFTOBJECT_SYNCSHIFTING_OFFSET UNITYSDK_OFFSET(0x1D0CDF0)
#define CRAFTOBJECT_SYNCPRESET_OFFSET UNITYSDK_OFFSET(0x1D0CE00)
#define CRAFTOBJECT_SYNCSHIFTING_OFFSET UNITYSDK_OFFSET(0x1D0CE10)
#define CRAFTOBJECT_SYNCNORMAL_OFFSET UNITYSDK_OFFSET(0x1D0D0A0)
#define CRAFTOBJECT_SYNCPRESETNAME_OFFSET UNITYSDK_OFFSET(0x1D0D330)
#define CRAFTOBJECT_SYNCPRESET_OFFSET UNITYSDK_OFFSET(0x1D0D5A0)
#define CRAFTOBJECT_GETORDEFAULTPRESET_OFFSET UNITYSDK_OFFSET(0x1D0D940)
#define CRAFTOBJECT_MAKEDEFAULTPRESET_OFFSET UNITYSDK_OFFSET(0x1D0DC80)
#define CRAFTOBJECT_GETPRESETNAMES_OFFSET UNITYSDK_OFFSET(0x1D0DD50)
#define CRAFTOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D0DEF0)

	inline static constexpr unsigned int CraftObject_TypeDefinitionIndex = 1598;

	class CraftObject : public Il2CppObject
	{
	public:
		Il2CppObject* _CraftInfos_k__BackingField; // 0x10
		Il2CppObject* _ShiftingCraftInfos_k__BackingField; // 0x18
		Il2CppObject* _PresetSlotDBs_k__BackingField; // 0x20

		Il2CppObject* get_CraftInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTOBJECT_GET_CRAFTINFOS_OFFSET))(nullptr);
		}

		::System::Void set_CraftInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTOBJECT_SET_CRAFTINFOS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ShiftingCraftInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTOBJECT_GET_SHIFTINGCRAFTINFOS_OFFSET))(nullptr);
		}

		::System::Void set_ShiftingCraftInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTOBJECT_SET_SHIFTINGCRAFTINFOS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PresetSlotDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTOBJECT_GET_PRESETSLOTDBS_OFFSET))(nullptr);
		}

		::System::Void set_PresetSlotDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTOBJECT_SET_PRESETSLOTDBS_OFFSET))(arg, nullptr);
		}

		::System::Void SyncNormal(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTOBJECT_SYNCNORMAL_OFFSET))(arg, nullptr);
		}

		::System::Void SyncShifting(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTOBJECT_SYNCSHIFTING_OFFSET))(arg, nullptr);
		}

		::System::Void SyncPreset(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTOBJECT_SYNCPRESET_OFFSET))(arg, nullptr);
		}

		::System::Void SyncShifting(::MX::GameLogic::DBModel::ShiftingCraftInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShiftingCraftInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTOBJECT_SYNCSHIFTING_OFFSET))(arg, nullptr);
		}

		::System::Void SyncNormal(::MX::GameLogic::DBModel::CraftInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTOBJECT_SYNCNORMAL_OFFSET))(arg, nullptr);
		}

		::System::Void SyncPresetName(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTOBJECT_SYNCPRESETNAME_OFFSET))(arg, str, nullptr);
		}

		::System::Void SyncPreset(::MX::GameLogic::DBModel::CraftPresetSlotDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftPresetSlotDB*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTOBJECT_SYNCPRESET_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetOrDefaultPreset(::System::Int32 arg, ::MX::GameLogic::DBModel::CraftPresetSlotDB&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::MX::GameLogic::DBModel::CraftPresetSlotDB&*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTOBJECT_GETORDEFAULTPRESET_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::CraftPresetSlotDB* MakeDefaultPreset(::System::Int32 arg)
		{
			return ((::MX::GameLogic::DBModel::CraftPresetSlotDB*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTOBJECT_MAKEDEFAULTPRESET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetPresetNames()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTOBJECT_GETPRESETNAMES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};

