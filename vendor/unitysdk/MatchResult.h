#pragma once
#include "unitysdk.h"

#define MATCHRESULT_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E92C10)
#define MATCHRESULT_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E92CB0)
#define MATCHRESULT_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x9E92D50)
#define MATCHRESULT_GET_HASMISSINGREQUIREDDEVICES_OFFSET UNITYSDK_OFFSET(0x9E92D60)
#define MATCHRESULT_GET_HASMISSINGOPTIONALDEVICES_OFFSET UNITYSDK_OFFSET(0x9E92D70)
#define MATCHRESULT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9E92D80)
#define MATCHRESULT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E92E50)
#define MATCHRESULT_GET_ISSUCCESSFULMATCH_OFFSET UNITYSDK_OFFSET(0x9E92EB0)
#define MATCHRESULT_GET_DEVICES_OFFSET UNITYSDK_OFFSET(0x9E92EC0)

	inline static constexpr unsigned int MatchResult_TypeDefinitionIndex = 28445;

	class MatchResult : public Il2CppObject
	{
	public:
		Result* m_Result; // 0x10
		::System::Single m_Score; // 0x14
		Il2CppObject* m_Devices; // 0x18
		Il2CppObject* m_Controls; // 0x38
		::Il2CppArray<::System::Object*>* m_Requirements; // 0x58

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATCHRESULT_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATCHRESULT_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Single get_score()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MATCHRESULT_GET_SCORE_OFFSET))(nullptr);
		}

		::System::Boolean get_hasMissingRequiredDevices()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATCHRESULT_GET_HASMISSINGREQUIREDDEVICES_OFFSET))(nullptr);
		}

		::System::Boolean get_hasMissingOptionalDevices()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATCHRESULT_GET_HASMISSINGOPTIONALDEVICES_OFFSET))(nullptr);
		}

		Match* get_Item(::System::Int32 arg)
		{
			return (return (Match*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MATCHRESULT_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATCHRESULT_DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean get_isSuccessfulMatch()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATCHRESULT_GET_ISSUCCESSFULMATCH_OFFSET))(nullptr);
		}

		Il2CppObject* get_devices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATCHRESULT_GET_DEVICES_OFFSET))(nullptr);
		}

	};

