#pragma once
#include "../unitysdk.h"

#define NPA_IUNITYENGINEAPPLICATION_GETUNITYVERSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IUNITYENGINEAPPLICATION_GETDATAPATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IUNITYENGINEAPPLICATION_ISEDITOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA
{
	inline static constexpr unsigned int IUnityEngineApplication_TypeDefinitionIndex = 25557;

	class IUnityEngineApplication : public Il2CppObject
	{
	public:
		::System::String* GetUnityVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_IUNITYENGINEAPPLICATION_GETUNITYVERSION_OFFSET))(nullptr);
		}

		::System::String* GetDataPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_IUNITYENGINEAPPLICATION_GETDATAPATH_OFFSET))(nullptr);
		}

		::System::Boolean IsEditor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_IUNITYENGINEAPPLICATION_ISEDITOR_OFFSET))(nullptr);
		}

	};
}

