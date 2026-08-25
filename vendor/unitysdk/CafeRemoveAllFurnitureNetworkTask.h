#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CAFEREMOVEALLFURNITURENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F131D0)
#define CAFEREMOVEALLFURNITURENETWORKTASK_SET_DBID_OFFSET UNITYSDK_OFFSET(0x1F131E0)
#define CAFEREMOVEALLFURNITURENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F131F0)
#define CAFEREMOVEALLFURNITURENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F13280)
#define CAFEREMOVEALLFURNITURENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F13290)
#define CAFEREMOVEALLFURNITURENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F13320)
#define CAFEREMOVEALLFURNITURENETWORKTASK_GET_DBID_OFFSET UNITYSDK_OFFSET(0x1F13790)

	inline static constexpr unsigned int CafeRemoveAllFurnitureNetworkTask_TypeDefinitionIndex = 2044;

	class CafeRemoveAllFurnitureNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _DBId_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEREMOVEALLFURNITURENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_DBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEREMOVEALLFURNITURENETWORKTASK_SET_DBID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEREMOVEALLFURNITURENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEREMOVEALLFURNITURENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEREMOVEALLFURNITURENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEREMOVEALLFURNITURENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Int64 get_DBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEREMOVEALLFURNITURENETWORKTASK_GET_DBID_OFFSET))(nullptr);
		}

	};

