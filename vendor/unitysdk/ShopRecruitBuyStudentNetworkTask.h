#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace MX::NetworkProtocol { class Protocol; }

#define SHOPRECRUITBUYSTUDENTNETWORKTASK_GET_MERCHANDISEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA8000)
#define SHOPRECRUITBUYSTUDENTNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1FA8010)
#define SHOPRECRUITBUYSTUDENTNETWORKTASK_SET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA8020)
#define SHOPRECRUITBUYSTUDENTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FA8030)
#define SHOPRECRUITBUYSTUDENTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FA4D20)
#define SHOPRECRUITBUYSTUDENTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FA90A0)
#define SHOPRECRUITBUYSTUDENTNETWORKTASK_SET_MERCHANDISEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA9130)
#define SHOPRECRUITBUYSTUDENTNETWORKTASK_GET_TARGETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1FA9140)
#define SHOPRECRUITBUYSTUDENTNETWORKTASK_SET_TARGETCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1FA9150)
#define SHOPRECRUITBUYSTUDENTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FA9160)
#define SHOPRECRUITBUYSTUDENTNETWORKTASK_GET_COST_OFFSET UNITYSDK_OFFSET(0x1FA91F0)
#define SHOPRECRUITBUYSTUDENTNETWORKTASK_GET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA9200)
#define SHOPRECRUITBUYSTUDENTNETWORKTASK_SET_COST_OFFSET UNITYSDK_OFFSET(0x1FA9210)
#define SHOPRECRUITBUYSTUDENTNETWORKTASK_BUILDREWARDCONFIRMDATA_OFFSET UNITYSDK_OFFSET(0x1FA32F0)

	inline static constexpr unsigned int ShopRecruitBuyStudentNetworkTask_TypeDefinitionIndex = 2846;

	class ShopRecruitBuyStudentNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _MerchandiseUniqueId_k__BackingField; // 0x40
		::System::Int64 _ShopUniqueId_k__BackingField; // 0x48
		::MX::GameLogic::Parcel::ParcelCost* _Cost_k__BackingField; // 0x50
		Il2CppObject* _TargetCharacterId_k__BackingField; // 0x58

		::System::Int64 get_MerchandiseUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPRECRUITBUYSTUDENTNETWORKTASK_GET_MERCHANDISEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPRECRUITBUYSTUDENTNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		::System::Void set_ShopUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPRECRUITBUYSTUDENTNETWORKTASK_SET_SHOPUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPRECRUITBUYSTUDENTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPRECRUITBUYSTUDENTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPRECRUITBUYSTUDENTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_MerchandiseUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPRECRUITBUYSTUDENTNETWORKTASK_SET_MERCHANDISEUNIQUEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_TargetCharacterId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPRECRUITBUYSTUDENTNETWORKTASK_GET_TARGETCHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_TargetCharacterId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPRECRUITBUYSTUDENTNETWORKTASK_SET_TARGETCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPRECRUITBUYSTUDENTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* get_Cost()
		{
			return ((::MX::GameLogic::Parcel::ParcelCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPRECRUITBUYSTUDENTNETWORKTASK_GET_COST_OFFSET))(nullptr);
		}

		::System::Int64 get_ShopUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPRECRUITBUYSTUDENTNETWORKTASK_GET_SHOPUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_Cost(::MX::GameLogic::Parcel::ParcelCost* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelCost*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPRECRUITBUYSTUDENTNETWORKTASK_SET_COST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* BuildRewardConfirmData(Il2CppObject* arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SHOPRECRUITBUYSTUDENTNETWORKTASK_BUILDREWARDCONFIRMDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

