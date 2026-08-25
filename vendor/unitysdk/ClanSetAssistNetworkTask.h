#pragma once
#include "unitysdk.h"

namespace FlatData { class EchelonType; }
namespace MX::NetworkProtocol { class Protocol; }

#define CLANSETASSISTNETWORKTASK_SET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x1F2A3D0)
#define CLANSETASSISTNETWORKTASK_SET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0x1F2A3E0)
#define CLANSETASSISTNETWORKTASK_SET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0x1F2A3F0)
#define CLANSETASSISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F2A400)
#define CLANSETASSISTNETWORKTASK_GET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0x1F2A730)
#define CLANSETASSISTNETWORKTASK_SET_CHARACTERDBID_OFFSET UNITYSDK_OFFSET(0x1F2A740)
#define CLANSETASSISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F2A750)
#define CLANSETASSISTNETWORKTASK_GET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0x1F2A7E0)
#define CLANSETASSISTNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F2A7F0)
#define CLANSETASSISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F2A800)
#define CLANSETASSISTNETWORKTASK_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x1F2A810)
#define CLANSETASSISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F2A820)
#define CLANSETASSISTNETWORKTASK_GET_CHARACTERDBID_OFFSET UNITYSDK_OFFSET(0x1F2A830)

	inline static constexpr unsigned int ClanSetAssistNetworkTask_TypeDefinitionIndex = 2201;

	class ClanSetAssistNetworkTask : public Il2CppObject
	{
	public:
		::FlatData::EchelonType* _EchelonType_k__BackingField; // 0x40
		::System::Int32 _SlotNumber_k__BackingField; // 0x44
		::System::Int64 _CharacterDBId_k__BackingField; // 0x48
		::System::Int32 _CombatStyleIndex_k__BackingField; // 0x50

		::System::Void set_EchelonType(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + CLANSETASSISTNETWORKTASK_SET_ECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SlotNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CLANSETASSISTNETWORKTASK_SET_SLOTNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void set_CombatStyleIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CLANSETASSISTNETWORKTASK_SET_COMBATSTYLEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CLANSETASSISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Int32 get_SlotNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSETASSISTNETWORKTASK_GET_SLOTNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_CharacterDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANSETASSISTNETWORKTASK_SET_CHARACTERDBID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSETASSISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int32 get_CombatStyleIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSETASSISTNETWORKTASK_GET_COMBATSTYLEINDEX_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSETASSISTNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSETASSISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return ((::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSETASSISTNETWORKTASK_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSETASSISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSETASSISTNETWORKTASK_GET_CHARACTERDBID_OFFSET))(nullptr);
		}

	};

