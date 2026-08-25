#pragma once
#include "unitysdk.h"

namespace FlatData { class OpenConditionContent; }

#define OPENCONTENTSSCROLLITEM_GET_OPENCONTENT_OFFSET UNITYSDK_OFFSET(0x2717E40)
#define OPENCONTENTSSCROLLITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x2717CF0)
#define OPENCONTENTSSCROLLITEM_GET_CAMPAIGNSTAGEID_OFFSET UNITYSDK_OFFSET(0x2717E50)

	inline static constexpr unsigned int OpenContentsScrollItem_TypeDefinitionIndex = 7143;

	class OpenContentsScrollItem : public Il2CppObject
	{
	public:
		::FlatData::OpenConditionContent* _OpenContent_k__BackingField; // 0x10
		::System::Int64 _CampaignStageId_k__BackingField; // 0x18

		::FlatData::OpenConditionContent* get_OpenContent()
		{
			return ((::FlatData::OpenConditionContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONTENTSSCROLLITEM_GET_OPENCONTENT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::OpenConditionContent* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::OpenConditionContent*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONTENTSSCROLLITEM_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_CampaignStageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONTENTSSCROLLITEM_GET_CAMPAIGNSTAGEID_OFFSET))(nullptr);
		}

	};

