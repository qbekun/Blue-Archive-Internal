#pragma once
#include "unitysdk.h"

#define FETCHPRIMARYLINKRESULT_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x9D082B0)
#define FETCHPRIMARYLINKRESULT_GET_HASPRIMARYLINK_OFFSET UNITYSDK_OFFSET(0x9D08340)
#define FETCHPRIMARYLINKRESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D084E0)

	inline static constexpr unsigned int FetchPrimaryLinkResult_TypeDefinitionIndex = 25852;

	class FetchPrimaryLinkResult : public Il2CppObject
	{
	public:
		::System::Int32 code; // 0x10
		::System::String* message; // 0x18
		::System::String* name; // 0x20
		Il2CppObject* links; // 0x28

		FetchPrimaryLinkResult* get_Default()
		{
			return (return (FetchPrimaryLinkResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + FETCHPRIMARYLINKRESULT_GET_DEFAULT_OFFSET))(nullptr);
		}

		::System::Boolean get_HasPrimaryLink()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FETCHPRIMARYLINKRESULT_GET_HASPRIMARYLINK_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FETCHPRIMARYLINKRESULT_TOSTRING_OFFSET))(nullptr);
		}

	};

