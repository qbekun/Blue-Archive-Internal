#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_IWRAPPEDDICTIONARY_GET_UNDERLYINGDICTIONARY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int IWrappedDictionary_TypeDefinitionIndex = 31825;

	class IWrappedDictionary : public Il2CppObject
	{
	public:
		::System::Object* get_UnderlyingDictionary()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_IWRAPPEDDICTIONARY_GET_UNDERLYINGDICTIONARY_OFFSET))(nullptr);
		}

	};
}

