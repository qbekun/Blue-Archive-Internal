#pragma once
#include "../../unitysdk.h"

#define MXFIELD_UI_FIELDREFRESHQUESTDISPLAYMESSAGE_SET_BLOCK_OFFSET UNITYSDK_OFFSET(0xE97FC0)
#define MXFIELD_UI_FIELDREFRESHQUESTDISPLAYMESSAGE_GET_BLOCK_OFFSET UNITYSDK_OFFSET(0xE97FD0)
#define MXFIELD_UI_FIELDREFRESHQUESTDISPLAYMESSAGE_GET_INPUTBLOCKPREDICATE_OFFSET UNITYSDK_OFFSET(0xE97FE0)
#define MXFIELD_UI_FIELDREFRESHQUESTDISPLAYMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE98010)

namespace MXField::UI
{
	inline static constexpr unsigned int FieldRefreshQuestDisplayMessage_TypeDefinitionIndex = 10706;

	class FieldRefreshQuestDisplayMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Boolean _Block_k__BackingField; // 0x18
		::System::Action* AfterDirectionAction; // 0x20

		::System::Void set_Block(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDREFRESHQUESTDISPLAYMESSAGE_SET_BLOCK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Block()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDREFRESHQUESTDISPLAYMESSAGE_GET_BLOCK_OFFSET))(nullptr);
		}

		::System::String* get_InputBlockPredicate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDREFRESHQUESTDISPLAYMESSAGE_GET_INPUTBLOCKPREDICATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDREFRESHQUESTDISPLAYMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};
}

