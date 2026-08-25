#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Rect; }

#define PARENTCLIPSCOPE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA27CBC0)
#define PARENTCLIPSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA27CC60)

	inline static constexpr unsigned int ParentClipScope_TypeDefinitionIndex = 36533;

	class ParentClipScope : public Il2CppObject
	{
	public:
		::System::Boolean m_Disposed; // 0x10

		::System::Void .ctor(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + PARENTCLIPSCOPE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARENTCLIPSCOPE_DISPOSE_OFFSET))(nullptr);
		}

	};

