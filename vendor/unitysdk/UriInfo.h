#pragma once
#include "unitysdk.h"

#define URIINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD2B80)

	inline static constexpr unsigned int UriInfo_TypeDefinitionIndex = 29171;

	class UriInfo : public Il2CppObject
	{
	public:
		::System::String* Host; // 0x10
		::System::String* ScopeId; // 0x18
		::System::String* String; // 0x20
		Offset* Offset; // 0x28
		::System::String* DnsSafeHost; // 0x38
		MoreInfo* MoreInfo; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + URIINFO_.CTOR_OFFSET))(nullptr);
		}

	};

