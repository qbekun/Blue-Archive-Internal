#pragma once
#include "../unitysdk.h"

#define MXFIELD_FIELDPREFERENCES_GET_ADDRESSABLEPATH_OFFSET UNITYSDK_OFFSET(0xE6DAB0)
#define MXFIELD_FIELDPREFERENCES_GET_FIELDQUESTSOPATH_OFFSET UNITYSDK_OFFSET(0xE6DAE0)
#define MXFIELD_FIELDPREFERENCES_GET_FIELDADDRESSABLESCENESUBPATH_OFFSET UNITYSDK_OFFSET(0xE6DC60)
#define MXFIELD_FIELDPREFERENCES_GET_FIELDADDRESSABLESUBPATH_OFFSET UNITYSDK_OFFSET(0xE6DCC0)
#define MXFIELD_FIELDPREFERENCES_GET_FIELDADDRESSABLESCENEPATH_OFFSET UNITYSDK_OFFSET(0xE6DCF0)
#define MXFIELD_FIELDPREFERENCES_GET_FIELDPATHROOT_OFFSET UNITYSDK_OFFSET(0xE6DDD0)
#define MXFIELD_FIELDPREFERENCES_GET_FIELDADDRESSABLEPATHROOT_OFFSET UNITYSDK_OFFSET(0xE6DBC0)
#define MXFIELD_FIELDPREFERENCES_GETFIELDTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0xE6DE00)
#define MXFIELD_FIELDPREFERENCES_GET_FIELDTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0xE6DEA0)

namespace MXField
{
	inline static constexpr unsigned int FieldPreferences_TypeDefinitionIndex = 10518;

	class FieldPreferences : public Il2CppObject
	{
	public:
		::System::String* get_AddressablePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDPREFERENCES_GET_ADDRESSABLEPATH_OFFSET))(nullptr);
		}

		::System::String* get_FieldQuestSOPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDPREFERENCES_GET_FIELDQUESTSOPATH_OFFSET))(nullptr);
		}

		::System::String* get_FieldAddressableSceneSubPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDPREFERENCES_GET_FIELDADDRESSABLESCENESUBPATH_OFFSET))(nullptr);
		}

		::System::String* get_FieldAddressableSubpath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDPREFERENCES_GET_FIELDADDRESSABLESUBPATH_OFFSET))(nullptr);
		}

		::System::String* get_FieldAddressableScenePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDPREFERENCES_GET_FIELDADDRESSABLESCENEPATH_OFFSET))(nullptr);
		}

		::System::String* get_FieldPathRoot()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDPREFERENCES_GET_FIELDPATHROOT_OFFSET))(nullptr);
		}

		::System::String* get_FieldAddressablePathRoot()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDPREFERENCES_GET_FIELDADDRESSABLEPATHROOT_OFFSET))(nullptr);
		}

		::System::String* GetFieldTimelinePath(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDPREFERENCES_GETFIELDTIMELINEPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_FieldTimelinePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDPREFERENCES_GET_FIELDTIMELINEPATH_OFFSET))(nullptr);
		}

	};
}

