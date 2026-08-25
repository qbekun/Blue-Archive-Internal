#pragma once
#include "unitysdk.h"

namespace FlatData { class EchelonType; }
namespace MX::NetworkProtocol { class Protocol; }

#define CLANALLASSISTLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F242D0)
#define CLANALLASSISTLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F24930)
#define CLANALLASSISTLISTNETWORKTASK_GET_PENDINGASSISTDBS_OFFSET UNITYSDK_OFFSET(0x1F24940)
#define CLANALLASSISTLISTNETWORKTASK_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x1F24950)
#define CLANALLASSISTLISTNETWORKTASK_SET_PENDINGASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1F24960)
#define CLANALLASSISTLISTNETWORKTASK_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1F24970)
#define CLANALLASSISTLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F24980)
#define CLANALLASSISTLISTNETWORKTASK__PROCESSSESSION_B__20_0_OFFSET UNITYSDK_OFFSET(0x1F24A10)
#define CLANALLASSISTLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F24A20)
#define CLANALLASSISTLISTNETWORKTASK_SET_OPENFORMATIONCHAREDITCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F24AF0)
#define CLANALLASSISTLISTNETWORKTASK_SET_PENDINGASSISTDBS_OFFSET UNITYSDK_OFFSET(0x1F24B00)
#define CLANALLASSISTLISTNETWORKTASK_GET_PENDINGASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1F24B10)
#define CLANALLASSISTLISTNETWORKTASK_SET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x1F24B20)
#define CLANALLASSISTLISTNETWORKTASK_GET_OPENFORMATIONCHAREDITCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F24B30)
#define CLANALLASSISTLISTNETWORKTASK_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1F24B40)

	inline static constexpr unsigned int ClanAllAssistListNetworkTask_TypeDefinitionIndex = 2159;

	class ClanAllAssistListNetworkTask : public Il2CppObject
	{
	public:
		::FlatData::EchelonType* _EchelonType_k__BackingField; // 0x40
		Il2CppObject* _PendingAssistUseInfo_k__BackingField; // 0x48
		Il2CppObject* _PendingAssistDBs_k__BackingField; // 0x50
		::System::Action* _OpenFormationCharEditCallback_k__BackingField; // 0x58
		::System::Boolean _IsPractice_k__BackingField; // 0x60

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_PendingAssistDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTNETWORKTASK_GET_PENDINGASSISTDBS_OFFSET))(nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return ((::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTNETWORKTASK_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_PendingAssistUseInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTNETWORKTASK_SET_PENDINGASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTNETWORKTASK_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__20_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTNETWORKTASK__PROCESSSESSION_B__20_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_OpenFormationCharEditCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTNETWORKTASK_SET_OPENFORMATIONCHAREDITCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void set_PendingAssistDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTNETWORKTASK_SET_PENDINGASSISTDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PendingAssistUseInfo()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTNETWORKTASK_GET_PENDINGASSISTUSEINFO_OFFSET))(nullptr);
		}

		::System::Void set_EchelonType(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTNETWORKTASK_SET_ECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Action* get_OpenFormationCharEditCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTNETWORKTASK_GET_OPENFORMATIONCHAREDITCALLBACK_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTNETWORKTASK_GET_ISPRACTICE_OFFSET))(nullptr);
		}

	};

