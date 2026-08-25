#pragma once
#include "unitysdk.h"

class GroundCommandCameraShake;
namespace UnityEngine { class AnimationCurve; }
class CameraShaker;
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define GROUNDCOMMANDCAMERASHAKEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AD010)
#define GROUNDCOMMANDCAMERASHAKEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15AD020)
#define GROUNDCOMMANDCAMERASHAKEVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15AD030)
#define GROUNDCOMMANDCAMERASHAKEVISUAL_LOADCURVE_OFFSET UNITYSDK_OFFSET(0x15AD0C0)
#define GROUNDCOMMANDCAMERASHAKEVISUAL__VISUALIZE_G__RUNCAMERASHAKE|5_0_OFFSET UNITYSDK_OFFSET(0x15AD1E0)
#define GROUNDCOMMANDCAMERASHAKEVISUAL_START_OFFSET UNITYSDK_OFFSET(0x15AD2C0)
#define GROUNDCOMMANDCAMERASHAKEVISUAL_HANDLETURNOFFCAMERASHAKEMESSAGE_OFFSET UNITYSDK_OFFSET(0x15AD3E0)
#define GROUNDCOMMANDCAMERASHAKEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AD4A0)
#define GROUNDCOMMANDCAMERASHAKEVISUAL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15AD560)

	inline static constexpr unsigned int GroundCommandCameraShakeVisual_TypeDefinitionIndex = 1126;

	class GroundCommandCameraShakeVisual : public Il2CppObject
	{
	public:
		GroundCommandCameraShake* Command; // 0x18
		::UnityEngine::AnimationCurve* animationCurve; // 0x20
		CameraShaker* cameraShaker; // 0x28

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERASHAKEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERASHAKEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERASHAKEVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void LoadCurve(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERASHAKEVISUAL_LOADCURVE_OFFSET))(arg, nullptr);
		}

		::System::Void _Visualize_g__RunCameraShake|5_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERASHAKEVISUAL__VISUALIZE_G__RUNCAMERASHAKE|5_0_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERASHAKEVISUAL_START_OFFSET))(nullptr);
		}

		::System::Boolean HandleTurnOffCameraShakeMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERASHAKEVISUAL_HANDLETURNOFFCAMERASHAKEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERASHAKEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERASHAKEVISUAL_ONDESTROY_OFFSET))(nullptr);
		}

	};

