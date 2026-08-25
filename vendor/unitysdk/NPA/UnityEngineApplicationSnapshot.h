#pragma once
#include "../unitysdk.h"

#define NPA_UNITYENGINEAPPLICATIONSNAPSHOT_GETUNITYVERSION_OFFSET UNITYSDK_OFFSET(0x9BC0E10)
#define NPA_UNITYENGINEAPPLICATIONSNAPSHOT_GETDATAPATH_OFFSET UNITYSDK_OFFSET(0x9BC0E20)
#define NPA_UNITYENGINEAPPLICATIONSNAPSHOT_ISEDITOR_OFFSET UNITYSDK_OFFSET(0x9BC0E30)
#define NPA_UNITYENGINEAPPLICATIONSNAPSHOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BC0E40)

namespace NPA
{
	inline static constexpr unsigned int UnityEngineApplicationSnapshot_TypeDefinitionIndex = 25560;

	class UnityEngineApplicationSnapshot : public Il2CppObject
	{
	public:
		::System::String* _unityVersion; // 0x10
		::System::String* _dataPath; // 0x18
		::System::Boolean _isEditor; // 0x20

		::System::String* GetUnityVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYENGINEAPPLICATIONSNAPSHOT_GETUNITYVERSION_OFFSET))(nullptr);
		}

		::System::String* GetDataPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYENGINEAPPLICATIONSNAPSHOT_GETDATAPATH_OFFSET))(nullptr);
		}

		::System::Boolean IsEditor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYENGINEAPPLICATIONSNAPSHOT_ISEDITOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYENGINEAPPLICATIONSNAPSHOT_.CTOR_OFFSET))(nullptr);
		}

	};
}

