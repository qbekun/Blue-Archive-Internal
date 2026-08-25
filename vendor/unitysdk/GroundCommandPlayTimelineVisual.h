#pragma once
#include "unitysdk.h"

class GroundCommandPlayTimeline;
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDPLAYTIMELINEVISUAL_ONTIMELINEFINISHED_OFFSET UNITYSDK_OFFSET(0x15B5000)
#define GROUNDCOMMANDPLAYTIMELINEVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B5090)
#define GROUNDCOMMANDPLAYTIMELINEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B51B0)
#define GROUNDCOMMANDPLAYTIMELINEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B51C0)
#define GROUNDCOMMANDPLAYTIMELINEVISUAL_COVISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B5120)
#define GROUNDCOMMANDPLAYTIMELINEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B52A0)

	inline static constexpr unsigned int GroundCommandPlayTimelineVisual_TypeDefinitionIndex = 1174;

	class GroundCommandPlayTimelineVisual : public Il2CppObject
	{
	public:
		GroundCommandPlayTimeline* Command; // 0x18

		::System::Void OnTimelineFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTIMELINEVISUAL_ONTIMELINEFINISHED_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTIMELINEVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTIMELINEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTIMELINEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoVisualize(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTIMELINEVISUAL_COVISUALIZE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYTIMELINEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

