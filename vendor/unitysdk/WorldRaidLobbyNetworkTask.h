#pragma once
#include "unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::NetworkProtocol { class Protocol; }

#define WORLDRAIDLOBBYNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FB1350)
#define WORLDRAIDLOBBYNETWORKTASK_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1FB13E0)
#define WORLDRAIDLOBBYNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FB13F0)
#define WORLDRAIDLOBBYNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB1400)
#define WORLDRAIDLOBBYNETWORKTASK_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1FB1410)
#define WORLDRAIDLOBBYNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1FB1420)
#define WORLDRAIDLOBBYNETWORKTASK_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1FB1430)
#define WORLDRAIDLOBBYNETWORKTASK_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1FB1440)
#define WORLDRAIDLOBBYNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FB1450)

	inline static constexpr unsigned int WorldRaidLobbyNetworkTask_TypeDefinitionIndex = 2898;

	class WorldRaidLobbyNetworkTask : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x40
		::System::Int64 _SeasonId_k__BackingField; // 0x48

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDLOBBYNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDLOBBYNETWORKTASK_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDLOBBYNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDLOBBYNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDLOBBYNETWORKTASK_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDLOBBYNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDLOBBYNETWORKTASK_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDLOBBYNETWORKTASK_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDLOBBYNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

