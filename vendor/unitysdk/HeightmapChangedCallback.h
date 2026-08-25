#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Terrain; }
namespace UnityEngine { class RectInt; }

#define HEIGHTMAPCHANGEDCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A7C40)
#define HEIGHTMAPCHANGEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2A7D10)

	inline static constexpr unsigned int HeightmapChangedCallback_TypeDefinitionIndex = 37794;

	class HeightmapChangedCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HEIGHTMAPCHANGEDCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Terrain* arg, ::UnityEngine::RectInt* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Terrain*, ::UnityEngine::RectInt*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEIGHTMAPCHANGEDCALLBACK_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

