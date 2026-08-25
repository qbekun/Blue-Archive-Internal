#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class ConquestTileVisual;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Vector3; }

#define UIHEXATILECALCULATEREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x2366F50)
#define UIHEXATILECALCULATEREWARD_GET_HASTILEVISUAL_OFFSET UNITYSDK_OFFSET(0x23627F0)
#define UIHEXATILECALCULATEREWARD_GET_ANIM_OFFSET UNITYSDK_OFFSET(0x2366F60)
#define UIHEXATILECALCULATEREWARD_UPDATE_OFFSET UNITYSDK_OFFSET(0x2366F70)
#define UIHEXATILECALCULATEREWARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x235A7A0)
#define UIHEXATILECALCULATEREWARD_CLEARTILEVISUAL_OFFSET UNITYSDK_OFFSET(0x235A780)

	inline static constexpr unsigned int UIHexaTileCalculateReward_TypeDefinitionIndex = 5067;

	class UIHexaTileCalculateReward : public Il2CppObject
	{
	public:
		::System::Single normalOffsetY; // 0x18
		::System::Single bossOffsetY; // 0x1C
		::UnityEngine::Animation* anim; // 0x20
		ConquestTileVisual* tileVisual; // 0x28
		::UnityEngine::Camera* cam; // 0x30
		::UnityEngine::Vector3* offsetPos; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHEXATILECALCULATEREWARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_HasTileVisual()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHEXATILECALCULATEREWARD_GET_HASTILEVISUAL_OFFSET))(nullptr);
		}

		::UnityEngine::Animation* get_Anim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHEXATILECALCULATEREWARD_GET_ANIM_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHEXATILECALCULATEREWARD_UPDATE_OFFSET))(nullptr);
		}

		::System::Void SetData(ConquestTileVisual* arg, ::UnityEngine::Camera* arg2)
		{
			((::System::Void(*)(ConquestTileVisual*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UIHEXATILECALCULATEREWARD_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ClearTileVisual()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIHEXATILECALCULATEREWARD_CLEARTILEVISUAL_OFFSET))(nullptr);
		}

	};

