#pragma once
#include "../unitysdk.h"

#define MXPATH_IUSERDATA_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXPath
{
	inline static constexpr unsigned int IUserData_TypeDefinitionIndex = 38000;

	class IUserData : public Il2CppObject
	{
	public:
		::System::Boolean IsModified()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPATH_IUSERDATA_ISMODIFIED_OFFSET))(nullptr);
		}

	};
}

