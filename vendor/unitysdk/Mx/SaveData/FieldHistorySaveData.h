#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_FIELDHISTORYSAVEDATA_ADDFREEMODEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1CFB440)
#define MX_SAVEDATA_FIELDHISTORYSAVEDATA_HASFREEMODEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1CFB5B0)
#define MX_SAVEDATA_FIELDHISTORYSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFB640)
#define MX_SAVEDATA_FIELDHISTORYSAVEDATA_HASPLAYABLEDATE_OFFSET UNITYSDK_OFFSET(0x1CFB950)
#define MX_SAVEDATA_FIELDHISTORYSAVEDATA_HASFREEMODEDATEID_OFFSET UNITYSDK_OFFSET(0x1CFB9E0)
#define MX_SAVEDATA_FIELDHISTORYSAVEDATA_SYNCPLAYABLEDATES_OFFSET UNITYSDK_OFFSET(0x1CFBA30)
#define MX_SAVEDATA_FIELDHISTORYSAVEDATA_ADDOPENCONDITIONSTAGEID_OFFSET UNITYSDK_OFFSET(0x1CFBAF0)
#define MX_SAVEDATA_FIELDHISTORYSAVEDATA_HASCLEARDATE_OFFSET UNITYSDK_OFFSET(0x1CFBC60)
#define MX_SAVEDATA_FIELDHISTORYSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFBCF0)
#define MX_SAVEDATA_FIELDHISTORYSAVEDATA_SYNCCLEARDATE_OFFSET UNITYSDK_OFFSET(0x1CFBE40)
#define MX_SAVEDATA_FIELDHISTORYSAVEDATA_ISALREADYENTEREDWORLDMAP_OFFSET UNITYSDK_OFFSET(0x1CFBF00)
#define MX_SAVEDATA_FIELDHISTORYSAVEDATA_SAVEENTEREDWORLDMAP_OFFSET UNITYSDK_OFFSET(0x1CFC000)
#define MX_SAVEDATA_FIELDHISTORYSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFC220)
#define MX_SAVEDATA_FIELDHISTORYSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFB7F0)
#define MX_SAVEDATA_FIELDHISTORYSAVEDATA_HASOPENCONDITIONSTAGEID_OFFSET UNITYSDK_OFFSET(0x1CFC230)
#define MX_SAVEDATA_FIELDHISTORYSAVEDATA_SAVEFREEMODEBUTTONUNLOCKANI_OFFSET UNITYSDK_OFFSET(0x1CFC2C0)

namespace MX::SaveData
{
	inline static constexpr unsigned int FieldHistorySaveData_TypeDefinitionIndex = 19949;

	class FieldHistorySaveData : public Il2CppObject
	{
	public:
		Il2CppObject* ClearDateIds; // 0x10
		Il2CppObject* PlayableDateIds; // 0x18
		Il2CppObject* OpenConditionStageIds; // 0x20
		Il2CppObject* FreeModeDateIds; // 0x28
		Il2CppObject* EnteredWorldMapIds; // 0x30

		::System::Void AddFreeModeUniqueId(::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FIELDHISTORYSAVEDATA_ADDFREEMODEUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasFreeModeUniqueId(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FIELDHISTORYSAVEDATA_HASFREEMODEUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FIELDHISTORYSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean HasPlayableDate(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FIELDHISTORYSAVEDATA_HASPLAYABLEDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasFreeModeDateId(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FIELDHISTORYSAVEDATA_HASFREEMODEDATEID_OFFSET))(arg, nullptr);
		}

		::System::Void SyncPlayableDates(::System::Int64 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FIELDHISTORYSAVEDATA_SYNCPLAYABLEDATES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenConditionStageId(::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FIELDHISTORYSAVEDATA_ADDOPENCONDITIONSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasClearDate(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FIELDHISTORYSAVEDATA_HASCLEARDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FIELDHISTORYSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void SyncClearDate(::System::Int64 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FIELDHISTORYSAVEDATA_SYNCCLEARDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsAlreadyEnteredWorldMap(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FIELDHISTORYSAVEDATA_ISALREADYENTEREDWORLDMAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SaveEnteredWorldMap(::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FIELDHISTORYSAVEDATA_SAVEENTEREDWORLDMAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FIELDHISTORYSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FIELDHISTORYSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HasOpenConditionStageId(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FIELDHISTORYSAVEDATA_HASOPENCONDITIONSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SaveFreeModeButtonUnlockAni(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FIELDHISTORYSAVEDATA_SAVEFREEMODEBUTTONUNLOCKANI_OFFSET))(arg, nullptr);
		}

	};
}

