#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_IWRAPPEDCOLLECTION_GET_UNDERLYINGCOLLECTION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int IWrappedCollection_TypeDefinitionIndex = 31814;

	class IWrappedCollection : public Il2CppObject
	{
	public:
		::System::Object* get_UnderlyingCollection()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_IWRAPPEDCOLLECTION_GET_UNDERLYINGCOLLECTION_OFFSET))(nullptr);
		}

	};
}

