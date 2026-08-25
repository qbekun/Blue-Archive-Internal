#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MailDB; }

#define MX_GAMELOGIC_SERVICE_MAILSERVICE_GETHARDCAPWHENMAILCOUNTOVERHARDCAP_OFFSET UNITYSDK_OFFSET(0xFB2DB0)
#define MX_GAMELOGIC_SERVICE_MAILSERVICE_EXTRACTATTACHEDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0xFB2EB0)
#define MX_GAMELOGIC_SERVICE_MAILSERVICE_FLOORMAILCOUNTBYCAP_OFFSET UNITYSDK_OFFSET(0xFB3240)
#define MX_GAMELOGIC_SERVICE_MAILSERVICE_VALID_OFFSET UNITYSDK_OFFSET(0xFB3310)
#define MX_GAMELOGIC_SERVICE_MAILSERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xFB33B0)
#define MX_GAMELOGIC_SERVICE_MAILSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFB3460)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int MailService_TypeDefinitionIndex = 12363;

	class MailService : public Il2CppObject
	{
	public:
		::System::Int64 SoftCap; // 0x0
		::System::Int64 HardCap; // 0x8
		::System::Int32 AmountPerPage; // 0x10

		Il2CppObject* GetHardCapWhenMailCountOverHardCap(Il2CppObject* arg, ::System::Int64 arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MAILSERVICE_GETHARDCAPWHENMAILCOUNTOVERHARDCAP_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* ExtractAttachedParcelInfos(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MAILSERVICE_EXTRACTATTACHEDPARCELINFOS_OFFSET))(arg, nullptr);
		}

		::System::Int64 FloorMailCountByCap(Il2CppObject* arg)
		{
			return ((::System::Int64(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MAILSERVICE_FLOORMAILCOUNTBYCAP_OFFSET))(arg, nullptr);
		}

		::System::Boolean Valid(::MX::GameLogic::DBModel::MailDB* arg, ::System::DateTime* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::MailDB*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MAILSERVICE_VALID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MAILSERVICE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MAILSERVICE_.CTOR_OFFSET))(nullptr);
		}

	};
}

