#pragma once
#include "unitysdk.h"

class FormationSupportStatChange;

#define PLAYSUPPORTSTATCHANGEDMESSAGE_GET_SUPPORTSTATCHANGE_OFFSET UNITYSDK_OFFSET(0x24DADD0)
#define PLAYSUPPORTSTATCHANGEDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x24DADE0)

	inline static constexpr unsigned int PlaySupportStatChangedMessage_TypeDefinitionIndex = 5975;

	class PlaySupportStatChangedMessage : public ::TriInspector::TitleAttribute
	{
	public:
		FormationSupportStatChange* _SupportStatChange_k__BackingField; // 0x18

		FormationSupportStatChange* get_SupportStatChange()
		{
			return ((FormationSupportStatChange*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYSUPPORTSTATCHANGEDMESSAGE_GET_SUPPORTSTATCHANGE_OFFSET))(nullptr);
		}

		::System::Void .ctor(FormationSupportStatChange* arg)
		{
			((::System::Void(*)(FormationSupportStatChange*, ::PVOID))((::PBYTE)hIl2Cpp + PLAYSUPPORTSTATCHANGEDMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

