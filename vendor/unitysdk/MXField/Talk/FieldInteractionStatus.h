#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Data { class FieldInteractionInfo; }
namespace MXField::Talk { class FieldAIConversant_RandomInteractionElement; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define MXFIELD_TALK_FIELDINTERACTIONSTATUS_GET_INTERACTIONINFO_OFFSET UNITYSDK_OFFSET(0xEB7BE0)
#define MXFIELD_TALK_FIELDINTERACTIONSTATUS_GET_DEFAULTINTERACTIONINFO_OFFSET UNITYSDK_OFFSET(0xEB9A50)
#define MXFIELD_TALK_FIELDINTERACTIONSTATUS_GET_COST_OFFSET UNITYSDK_OFFSET(0xEB9B90)
#define MXFIELD_TALK_FIELDINTERACTIONSTATUS_GET_ISHISTORY_OFFSET UNITYSDK_OFFSET(0xEB9E10)
#define MXFIELD_TALK_FIELDINTERACTIONSTATUS_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0xEB8F50)
#define MXFIELD_TALK_FIELDINTERACTIONSTATUS_GET_HASCOST_OFFSET UNITYSDK_OFFSET(0xEB9E80)
#define MXFIELD_TALK_FIELDINTERACTIONSTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0xEB79B0)
#define MXFIELD_TALK_FIELDINTERACTIONSTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0xEB79E0)
#define MXFIELD_TALK_FIELDINTERACTIONSTATUS_GETCOSTPARCELINFO_OFFSET UNITYSDK_OFFSET(0xEB9BA0)

namespace MXField::Talk
{
	inline static constexpr unsigned int FieldInteractionStatus_TypeDefinitionIndex = 10821;

	class FieldInteractionStatus : public Il2CppObject
	{
	public:
		::MXField::Shared::Data::FieldInteractionInfo* interactionInfoCache; // 0x10
		::MXField::Talk::FieldAIConversant_RandomInteractionElement* randomInteractionElement; // 0x18

		::MXField::Shared::Data::FieldInteractionInfo* get_InteractionInfo()
		{
			return ((::MXField::Shared::Data::FieldInteractionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDINTERACTIONSTATUS_GET_INTERACTIONINFO_OFFSET))(nullptr);
		}

		::MXField::Shared::Data::FieldInteractionInfo* get_DefaultInteractionInfo()
		{
			return ((::MXField::Shared::Data::FieldInteractionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDINTERACTIONSTATUS_GET_DEFAULTINTERACTIONINFO_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_Cost()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDINTERACTIONSTATUS_GET_COST_OFFSET))(nullptr);
		}

		::System::Boolean get_IsHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDINTERACTIONSTATUS_GET_ISHISTORY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDINTERACTIONSTATUS_GET_ISAVAILABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasCost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDINTERACTIONSTATUS_GET_HASCOST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MXField::Shared::Data::FieldInteractionInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldInteractionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDINTERACTIONSTATUS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MXField::Talk::FieldAIConversant_RandomInteractionElement* arg)
		{
			((::System::Void(*)(::MXField::Talk::FieldAIConversant_RandomInteractionElement*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDINTERACTIONSTATUS_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* GetCostParcelInfo()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TALK_FIELDINTERACTIONSTATUS_GETCOSTPARCELINFO_OFFSET))(nullptr);
		}

	};
}

