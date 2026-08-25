#pragma once
#include "unitysdk.h"

namespace MXField::UI { class UIFieldHUD_Quest; }

#define QUESTCLEARACTION_SET_QUESTID_OFFSET UNITYSDK_OFFSET(0xE96C60)
#define QUESTCLEARACTION_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0xE96C70)
#define QUESTCLEARACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xE95E10)
#define QUESTCLEARACTION_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xE96C80)
#define QUESTCLEARACTION_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xE96C90)
#define QUESTCLEARACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xE96CA0)

	inline static constexpr unsigned int QuestClearAction_TypeDefinitionIndex = 10697;

	class QuestClearAction : public Il2CppObject
	{
	public:
		::MXField::UI::UIFieldHUD_Quest* _Owner_k__BackingField; // 0x40
		::System::Int64 _QuestId_k__BackingField; // 0x48

		::System::Void set_QuestId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + QUESTCLEARACTION_SET_QUESTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_QuestId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + QUESTCLEARACTION_GET_QUESTID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MXField::UI::UIFieldHUD_Quest* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MXField::UI::UIFieldHUD_Quest*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + QUESTCLEARACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MXField::UI::UIFieldHUD_Quest* get_Owner()
		{
			return ((::MXField::UI::UIFieldHUD_Quest*(*)(::PVOID))((::PBYTE)hIl2Cpp + QUESTCLEARACTION_GET_OWNER_OFFSET))(nullptr);
		}

		::System::Void set_Owner(::MXField::UI::UIFieldHUD_Quest* arg)
		{
			((::System::Void(*)(::MXField::UI::UIFieldHUD_Quest*, ::PVOID))((::PBYTE)hIl2Cpp + QUESTCLEARACTION_SET_OWNER_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + QUESTCLEARACTION_COEXECUTE_OFFSET))(nullptr);
		}

	};

