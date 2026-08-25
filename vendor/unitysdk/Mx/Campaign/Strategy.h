#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace MX::Campaign { class HexLocation; }
namespace MX::Data::Excel { class CampaignStrategyObjectExcel; }
namespace MX::Campaign { class Strategy; }

#define MX_CAMPAIGN_STRATEGY_GET_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x143B6C0)
#define MX_CAMPAIGN_STRATEGY_SET_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x143B6D0)
#define MX_CAMPAIGN_STRATEGY_GET_ACTIVATED_OFFSET UNITYSDK_OFFSET(0x143B6E0)
#define MX_CAMPAIGN_STRATEGY_SET_ACTIVATED_OFFSET UNITYSDK_OFFSET(0x143B6F0)
#define MX_CAMPAIGN_STRATEGY_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x143B700)
#define MX_CAMPAIGN_STRATEGY_SET_VALUES_OFFSET UNITYSDK_OFFSET(0x143B710)
#define MX_CAMPAIGN_STRATEGY_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x143B720)
#define MX_CAMPAIGN_STRATEGY_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x143B730)
#define MX_CAMPAIGN_STRATEGY_GET_MOVABLE_OFFSET UNITYSDK_OFFSET(0x143B740)
#define MX_CAMPAIGN_STRATEGY_GET_NEEDVALUETYPE_OFFSET UNITYSDK_OFFSET(0x143B760)
#define MX_CAMPAIGN_STRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0x143B780)
#define MX_CAMPAIGN_STRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0x143B790)
#define MX_CAMPAIGN_STRATEGY_CLONE_OFFSET UNITYSDK_OFFSET(0x143B880)
#define MX_CAMPAIGN_STRATEGY_INITEXCEL_OFFSET UNITYSDK_OFFSET(0x143B8E0)
#define MX_CAMPAIGN_STRATEGY_GETVALUEANDINCREMENTINDEX_OFFSET UNITYSDK_OFFSET(0x143B9E0)

namespace MX::Campaign
{
	inline static constexpr unsigned int Strategy_TypeDefinitionIndex = 14904;

	class Strategy : public Il2CppObject
	{
	public:
		::System::Int64 EntityId; // 0x10
		::UnityEngine::Vector3* Rotate; // 0x18
		::System::Int64 Id; // 0x28
		::MX::Campaign::HexLocation* Location; // 0x30
		::System::Boolean _PlayAnimation_k__BackingField; // 0x3C
		::System::Boolean _Activated_k__BackingField; // 0x3D
		::MX::Data::Excel::CampaignStrategyObjectExcel* CampaignStrategyExcel; // 0x40
		Il2CppObject* _Values_k__BackingField; // 0x50
		::System::Int32 _Index_k__BackingField; // 0x58

		::System::Boolean get_PlayAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_STRATEGY_GET_PLAYANIMATION_OFFSET))(nullptr);
		}

		::System::Void set_PlayAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_STRATEGY_SET_PLAYANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Activated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_STRATEGY_GET_ACTIVATED_OFFSET))(nullptr);
		}

		::System::Void set_Activated(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_STRATEGY_SET_ACTIVATED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Values()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_STRATEGY_GET_VALUES_OFFSET))(nullptr);
		}

		::System::Void set_Values(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_STRATEGY_SET_VALUES_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_STRATEGY_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void set_Index(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_STRATEGY_SET_INDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Movable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_STRATEGY_GET_MOVABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedValueType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_STRATEGY_GET_NEEDVALUETYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_STRATEGY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Campaign::Strategy* arg)
		{
			((::System::Void(*)(::MX::Campaign::Strategy*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_STRATEGY_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::Strategy* Clone()
		{
			return ((::MX::Campaign::Strategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_STRATEGY_CLONE_OFFSET))(nullptr);
		}

		::System::Void InitExcel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_STRATEGY_INITEXCEL_OFFSET))(nullptr);
		}

		::System::Int32 GetValueAndIncrementIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_STRATEGY_GETVALUEANDINCREMENTINDEX_OFFSET))(nullptr);
		}

	};
}

