#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class StyleSheet; }
namespace UnityEngine::UIElements { class StyleValueHandle; }

#define GETCURSORIDFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA370420)
#define GETCURSORIDFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xA370530)

	inline static constexpr unsigned int GetCursorIdFunction_TypeDefinitionIndex = 30804;

	class GetCursorIdFunction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETCURSORIDFUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::UnityEngine::UIElements::StyleSheet* arg, ::UnityEngine::UIElements::StyleValueHandle* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::UIElements::StyleSheet*, ::UnityEngine::UIElements::StyleValueHandle*, ::PVOID))((::PBYTE)hIl2Cpp + GETCURSORIDFUNCTION_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

