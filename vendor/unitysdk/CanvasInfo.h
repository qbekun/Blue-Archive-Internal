#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Canvas; }
namespace Cinemachine { class CinemachineBrain; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class RawImage; }

#define CANVASINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x283B030)

	inline static constexpr unsigned int CanvasInfo_TypeDefinitionIndex = 34234;

	class CanvasInfo : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* mCanvas; // 0x10
		::UnityEngine::Canvas* mCanvasComponent; // 0x18
		::Cinemachine::CinemachineBrain* mCanvasParent; // 0x20
		::UnityEngine::RectTransform* mViewport; // 0x28
		::UnityEngine::UI::RawImage* mRawImage; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANVASINFO_.CTOR_OFFSET))(nullptr);
		}

	};

