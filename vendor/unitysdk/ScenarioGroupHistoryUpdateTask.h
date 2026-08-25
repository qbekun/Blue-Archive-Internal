#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define SCENARIOGROUPHISTORYUPDATETASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F981C0)
#define SCENARIOGROUPHISTORYUPDATETASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F98250)
#define SCENARIOGROUPHISTORYUPDATETASK_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F98480)
#define SCENARIOGROUPHISTORYUPDATETASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F98490)
#define SCENARIOGROUPHISTORYUPDATETASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F984A0)
#define SCENARIOGROUPHISTORYUPDATETASK_GET_ID_OFFSET UNITYSDK_OFFSET(0x1F984B0)
#define SCENARIOGROUPHISTORYUPDATETASK_SET_ID_OFFSET UNITYSDK_OFFSET(0x1F984C0)
#define SCENARIOGROUPHISTORYUPDATETASK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F984D0)
#define SCENARIOGROUPHISTORYUPDATETASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F984E0)

	inline static constexpr unsigned int ScenarioGroupHistoryUpdateTask_TypeDefinitionIndex = 2762;

	class ScenarioGroupHistoryUpdateTask : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x40
		::System::Int64 _Type_k__BackingField; // 0x48

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOGROUPHISTORYUPDATETASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOGROUPHISTORYUPDATETASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_Type(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOGROUPHISTORYUPDATETASK_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOGROUPHISTORYUPDATETASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOGROUPHISTORYUPDATETASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOGROUPHISTORYUPDATETASK_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOGROUPHISTORYUPDATETASK_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Type()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOGROUPHISTORYUPDATETASK_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOGROUPHISTORYUPDATETASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

	};

