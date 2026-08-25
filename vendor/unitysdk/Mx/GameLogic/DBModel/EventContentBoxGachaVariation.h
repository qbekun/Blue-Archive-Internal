#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHAVARIATION_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFFC8F0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHAVARIATION_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFC900)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHAVARIATION_GET_GACHAROUNDELEMENTS_OFFSET UNITYSDK_OFFSET(0xFFCB40)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHAVARIATION_SET_GACHAROUNDELEMENTS_OFFSET UNITYSDK_OFFSET(0xFFCB50)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHAVARIATION_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFFCB60)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHAVARIATION_GET_VARIATIONID_OFFSET UNITYSDK_OFFSET(0xFFCB70)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHAVARIATION_SET_VARIATIONID_OFFSET UNITYSDK_OFFSET(0xFFCB80)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EventContentBoxGachaVariation_TypeDefinitionIndex = 12600;

	class EventContentBoxGachaVariation : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _VariationId_k__BackingField; // 0x18
		Il2CppObject* _GachaRoundElements_k__BackingField; // 0x20

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHAVARIATION_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHAVARIATION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* get_GachaRoundElements()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHAVARIATION_GET_GACHAROUNDELEMENTS_OFFSET))(nullptr);
		}

		::System::Void set_GachaRoundElements(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHAVARIATION_SET_GACHAROUNDELEMENTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHAVARIATION_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_VariationId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHAVARIATION_GET_VARIATIONID_OFFSET))(nullptr);
		}

		::System::Void set_VariationId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHAVARIATION_SET_VARIATIONID_OFFSET))(arg, nullptr);
		}

	};
}

