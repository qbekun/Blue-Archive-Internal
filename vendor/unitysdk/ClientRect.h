#pragma once
#include "unitysdk.h"

namespace UnityEngine { class RectInt; }

#define CLIENTRECT_TORECTINT_OFFSET UNITYSDK_OFFSET(0x1D29CC0)
#define CLIENTRECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D29D00)

	inline static constexpr unsigned int ClientRect_TypeDefinitionIndex = 20047;

	class ClientRect : public Il2CppObject
	{
	public:
		::System::Int32 m_XMin; // 0x10
		::System::Int32 m_YMin; // 0x14
		::System::Int32 m_Width; // 0x18
		::System::Int32 m_Height; // 0x1C

		::UnityEngine::RectInt* ToRectInt()
		{
			return (return (::UnityEngine::RectInt*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIENTRECT_TORECTINT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::RectInt* arg)
		{
			((::System::Void(*)(::UnityEngine::RectInt*, ::PVOID))((::PBYTE)hIl2Cpp + CLIENTRECT_.CTOR_OFFSET))(arg, nullptr);
		}

	};

