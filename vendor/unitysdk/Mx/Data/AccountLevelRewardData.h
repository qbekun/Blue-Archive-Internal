#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class AccountLevelRewardExcel; }

#define MX_DATA_ACCOUNTLEVELREWARDDATA_TRYGETACCOUNTLEVELREWARD_OFFSET UNITYSDK_OFFSET(0x1871F70)
#define MX_DATA_ACCOUNTLEVELREWARDDATA_HASALLLEVELREWARDS_OFFSET UNITYSDK_OFFSET(0x1871FE0)
#define MX_DATA_ACCOUNTLEVELREWARDDATA_INITIALIZESERVER_OFFSET UNITYSDK_OFFSET(0x18721B0)
#define MX_DATA_ACCOUNTLEVELREWARDDATA_GETALLLEVELREWARDS_OFFSET UNITYSDK_OFFSET(0x18726D0)
#define MX_DATA_ACCOUNTLEVELREWARDDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1872720)
#define MX_DATA_ACCOUNTLEVELREWARDDATA_TRYGETACCOUNTLEVELREWARDIDS_OFFSET UNITYSDK_OFFSET(0x1872760)
#define MX_DATA_ACCOUNTLEVELREWARDDATA_TRYGETACCOUNTLEVELREWARDBYID_OFFSET UNITYSDK_OFFSET(0x1872800)
#define MX_DATA_ACCOUNTLEVELREWARDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1872890)
#define MX_DATA_ACCOUNTLEVELREWARDDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x18729B0)
#define MX_DATA_ACCOUNTLEVELREWARDDATA_HASNONRECEIVEDLEVELREWARDS_OFFSET UNITYSDK_OFFSET(0x1872D60)
#define MX_DATA_ACCOUNTLEVELREWARDDATA_GETLEVELREWARD_OFFSET UNITYSDK_OFFSET(0x1872FD0)
#define MX_DATA_ACCOUNTLEVELREWARDDATA_GETRECEIVABLELEVELREWARDIDS_OFFSET UNITYSDK_OFFSET(0x1873030)
#define MX_DATA_ACCOUNTLEVELREWARDDATA_TRYGETACCOUNTLEVELREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x18730E0)

namespace MX::Data
{
	inline static constexpr unsigned int AccountLevelRewardData_TypeDefinitionIndex = 15951;

	class AccountLevelRewardData : public Il2CppObject
	{
	public:
		Il2CppObject* _accountLevelRewardTable; // 0x28
		Il2CppObject* accountLevelRewardDic; // 0x30
		Il2CppObject* accountLevelRewardIds; // 0x38

		::System::Boolean TryGetAccountLevelReward(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTLEVELREWARDDATA_TRYGETACCOUNTLEVELREWARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasAllLevelRewards(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTLEVELREWARDDATA_HASALLLEVELREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeServer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTLEVELREWARDDATA_INITIALIZESERVER_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllLevelRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTLEVELREWARDDATA_GETALLLEVELREWARDS_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTLEVELREWARDDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetAccountLevelRewardIds(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTLEVELREWARDDATA_TRYGETACCOUNTLEVELREWARDIDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetAccountLevelRewardById(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTLEVELREWARDDATA_TRYGETACCOUNTLEVELREWARDBYID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTLEVELREWARDDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTLEVELREWARDDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::Boolean HasNonReceivedLevelRewards(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTLEVELREWARDDATA_HASNONRECEIVEDLEVELREWARDS_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::AccountLevelRewardExcel* GetLevelReward(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::AccountLevelRewardExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTLEVELREWARDDATA_GETLEVELREWARD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetReceivableLevelRewardIds(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTLEVELREWARDDATA_GETRECEIVABLELEVELREWARDIDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetAccountLevelRewardExcel(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTLEVELREWARDDATA_TRYGETACCOUNTLEVELREWARDEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

