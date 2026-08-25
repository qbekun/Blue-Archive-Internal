#pragma once
#include "unitysdk.h"

namespace UnityEngine { class RectInt; }

#define RECT_TORECTINT_OFFSET UNITYSDK_OFFSET(0xDF2030)
#define RECT_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xDF0D20)
#define RECT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xDF0D30)

	inline static constexpr unsigned int RECT_TypeDefinitionIndex = 10166;

	class RECT : public Il2CppObject
	{
	public:
		::System::Int32 left; // 0x10
		::System::Int32 top; // 0x14
		::System::Int32 right; // 0x18
		::System::Int32 bottom; // 0x1C

		::UnityEngine::RectInt* ToRectInt()
		{
			return ((::UnityEngine::RectInt*(*)(::PVOID))((::PBYTE)hIl2Cpp + RECT_TORECTINT_OFFSET))(nullptr);
		}

		::System::Int32 get_Width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RECT_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Int32 get_Height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RECT_GET_HEIGHT_OFFSET))(nullptr);
		}

	};

