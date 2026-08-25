#pragma once
#include "unitysdk.h"

class GroundCommandFadeOutIn;
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDFADEOUTINVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AFB90)
#define GROUNDCOMMANDFADEOUTINVISUAL_COFADEINOUT_OFFSET UNITYSDK_OFFSET(0x15AFC50)
#define GROUNDCOMMANDFADEOUTINVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AFCE0)
#define GROUNDCOMMANDFADEOUTINVISUAL__COFADEINOUT_G__ONFADEIN|4_0_OFFSET UNITYSDK_OFFSET(0x15AFCF0)
#define GROUNDCOMMANDFADEOUTINVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15AFDE0)
#define GROUNDCOMMANDFADEOUTINVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15AFDF0)
#define GROUNDCOMMANDFADEOUTINVISUAL__COFADEINOUT_G__COFADEIN|4_2_OFFSET UNITYSDK_OFFSET(0x15AFD70)

	inline static constexpr unsigned int GroundCommandFadeOutInVisual_TypeDefinitionIndex = 1143;

	class GroundCommandFadeOutInVisual : public Il2CppObject
	{
	public:
		GroundCommandFadeOutIn* Command; // 0x18

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoFadeInOut()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINVISUAL_COFADEINOUT_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void _CoFadeInOut_g__OnFadeIn|4_0(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINVISUAL__COFADEINOUT_G__ONFADEIN|4_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _CoFadeInOut_g__CoFadeIn|4_2()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINVISUAL__COFADEINOUT_G__COFADEIN|4_2_OFFSET))(nullptr);
		}

	};

