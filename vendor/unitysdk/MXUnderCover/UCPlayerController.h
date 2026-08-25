#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class PlayerInputAsset; }
namespace MXUnderCover { class UCPlayer; }
class Type;

#define MXUNDERCOVER_UCPLAYERCONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0xDCA890)
#define MXUNDERCOVER_UCPLAYERCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDCA9B0)
#define MXUNDERCOVER_UCPLAYERCONTROLLER_REGISTER_OFFSET UNITYSDK_OFFSET(0xDCAA30)
#define MXUNDERCOVER_UCPLAYERCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xDCAB10)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCPlayerController_TypeDefinitionIndex = 10042;

	class UCPlayerController : public Il2CppObject
	{
	public:
		::MXUnderCover::PlayerInputAsset* inputAsset; // 0x18
		::MXUnderCover::UCPlayer* bindedPlayer; // 0x20
		Il2CppObject* inputMap; // 0x28

		::System::Void Bind(::MXUnderCover::UCPlayer* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYERCONTROLLER_BIND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYERCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Register(Type* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Type*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYERCONTROLLER_REGISTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYERCONTROLLER_UPDATE_OFFSET))(nullptr);
		}

	};
}

