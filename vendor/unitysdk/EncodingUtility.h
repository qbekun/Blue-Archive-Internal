#pragma once
#include "unitysdk.h"

#define ENCODINGUTILITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA233520)

	inline static constexpr unsigned int EncodingUtility_TypeDefinitionIndex = 31170;

	class EncodingUtility : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* encodingLookup; // 0x0
		::System::Text::Encoding* targetEncoding; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCODINGUTILITY_.CCTOR_OFFSET))(nullptr);
		}

	};

