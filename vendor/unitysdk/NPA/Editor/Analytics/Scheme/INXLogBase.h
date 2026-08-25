#pragma once
#include "../../../../unitysdk.h"

#define NPA_EDITOR_ANALYTICS_SCHEME_INXLOGBASE_GETDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_SCHEME_INXLOGBASE_GETNAME_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Analytics::Scheme
{
	inline static constexpr unsigned int INXLogBase_TypeDefinitionIndex = 27217;

	class INXLogBase : public Il2CppObject
	{
	public:
		::System::String* GetData()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_SCHEME_INXLOGBASE_GETDATA_OFFSET))(nullptr);
		}

		::System::String* GetName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_SCHEME_INXLOGBASE_GETNAME_OFFSET))(nullptr);
		}

	};
}

