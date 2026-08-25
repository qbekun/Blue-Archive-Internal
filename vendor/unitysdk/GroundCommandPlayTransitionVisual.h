#pragma once
#include "unitysdk.h"

class GroundCommandPlayTransition;
namespace MX::Logic::Battles { class O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace UnityEngine { class GameObject; }

#define GROUNDCOMMANDPLAYTRANSITIONVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B6C00)
#define GROUNDCOMMANDPLAYTRANSITIONVISUAL_O4E5F892D27CDFE3A9BB1D4AD4A23F0E0049EEE074C6D1709DA681581A6CDB3C1_OFFSET UNITYSDK_OFFSET(0x15B6E70)
#define GROUNDCOMMANDPLAYTRANSITIONVISUAL_COSTOPWHENRESUMED_OFFSET UNITYSDK_OFFSET(0x15B6FE0)
#define GROUNDCOMMANDPLAYTRANSITIONVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B7070)
#define GROUNDCOMMANDPLAYTRANSITIONVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B7080)
#define GROUNDCOMMANDPLAYTRANSITIONVISUAL_ONFINISHED_OFFSET UNITYSDK_OFFSET(0x15B7140)
#define GROUNDCOMMANDPLAYTRANSITIONVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B72A0)
#define GROUNDCOMMANDPLAYTRANSITIONVISUAL_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x15B72B0)

	inline static constexpr unsigned int GroundCommandPlayTransitionVisual_TypeDefinitionIndex = 1178;

	class GroundCommandPlayTransitionVisual : public Il2CppObject
	{
	public:
		GroundCommandPlayTransition* O4efd79a2055bd13723b1f2504a95f71eefea8a3e3343399c728f4b389200ca80; // 0x18
		::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39* Oe8f676d4500ff263c2a9454ea1f7a2c6d0e10a268c9df595ced74a9085b6dac9; // 0x20
		::UnityEngine::Playables::PlayableDirector* Ofcf36e301fa09b35bc74486db4e457ca201cf98dfe8b41ec0f13df3a1d325750; // 0x28

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTRANSITIONVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39* O4e5f892d27cdfe3a9bb1d4ad4a23f0e0049eee074c6d1709da681581a6cdb3c1()
		{
			return ((::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTRANSITIONVISUAL_O4E5F892D27CDFE3A9BB1D4AD4A23F0E0049EEE074C6D1709DA681581A6CDB3C1_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoStopWhenResumed()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTRANSITIONVISUAL_COSTOPWHENRESUMED_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTRANSITIONVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTRANSITIONVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void OnFinished(::MX::Logic::Battles::Battle* arg, ::UnityEngine::GameObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTRANSITIONVISUAL_ONFINISHED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTRANSITIONVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnApplicationPause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTRANSITIONVISUAL_ONAPPLICATIONPAUSE_OFFSET))(arg, nullptr);
		}

	};

