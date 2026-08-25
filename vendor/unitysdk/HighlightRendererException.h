#pragma once
#include "unitysdk.h"

#define HIGHLIGHTRENDEREREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13BD860)

	inline static constexpr unsigned int HighlightRendererException_TypeDefinitionIndex = 1021;

	class HighlightRendererException : public Il2CppObject
	{
	public:
		Il2CppObject* HighlightExceptionList; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGHLIGHTRENDEREREXCEPTION_.CTOR_OFFSET))(nullptr);
		}

	};

