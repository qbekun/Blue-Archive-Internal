#pragma once
#include "unitysdk.h"

#define DREAMMAKER3DINPUTHANDLER_TRYGETINPUTPOSITIONTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB8F330)
#define DREAMMAKER3DINPUTHANDLER_HANDLEINPUT_OFFSET UNITYSDK_OFFSET(0xB8F500)
#define DREAMMAKER3DINPUTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xB8F5C0)
#define DREAMMAKER3DINPUTHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB8F5D0)

	inline static constexpr unsigned int DreamMaker3DInputHandler_TypeDefinitionIndex = 553;

	class DreamMaker3DInputHandler : public Il2CppObject
	{
	public:
		::System::Boolean TryGetInputpositionTransform(::UnityEngine::Transform&* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform&*, ::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKER3DINPUTHANDLER_TRYGETINPUTPOSITIONTRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void HandleInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKER3DINPUTHANDLER_HANDLEINPUT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKER3DINPUTHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKER3DINPUTHANDLER_UPDATE_OFFSET))(nullptr);
		}

	};

