#pragma once
#include "unitysdk.h"

#define SETPRIMARYLINKRESULT_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x9D08220)

	inline static constexpr unsigned int SetPrimaryLinkResult_TypeDefinitionIndex = 25850;

	class SetPrimaryLinkResult : public Il2CppObject
	{
	public:
		::System::Int32 code; // 0x10
		::System::String* message; // 0x18
		::System::String* name; // 0x20
		::System::String* ticket; // 0x28

		SetPrimaryLinkResult* get_Default()
		{
			return (return (SetPrimaryLinkResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + SETPRIMARYLINKRESULT_GET_DEFAULT_OFFSET))(nullptr);
		}

	};

