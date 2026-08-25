#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Terrain; }
namespace UnityEngine { class RectInt; }

#define TEXTURECHANGEDCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A7D40)
#define TEXTURECHANGEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2A7E10)

	inline static constexpr unsigned int TextureChangedCallback_TypeDefinitionIndex = 37795;

	class TextureChangedCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TEXTURECHANGEDCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Terrain* arg, ::System::String* str, ::UnityEngine::RectInt* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Terrain*, ::System::String*, ::UnityEngine::RectInt*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TEXTURECHANGEDCALLBACK_INVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

	};

