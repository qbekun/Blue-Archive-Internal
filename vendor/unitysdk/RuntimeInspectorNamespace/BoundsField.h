#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class Vector3Field; }

#define RUNTIMEINSPECTORNAMESPACE_BOUNDSFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x956A380)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDSFIELD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x956A390)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDSFIELD_ONSKINCHANGED_OFFSET UNITYSDK_OFFSET(0x956A520)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDSFIELD_ONDEPTHCHANGED_OFFSET UNITYSDK_OFFSET(0x956A570)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDSFIELD_GET_HEIGHTMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x956A5C0)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDSFIELD_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x956A5D0)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDSFIELD_REFRESH_OFFSET UNITYSDK_OFFSET(0x956A690)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDSFIELD_ONBOUND_OFFSET UNITYSDK_OFFSET(0x956A6F0)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDSFIELD_ONINSPECTORCHANGED_OFFSET UNITYSDK_OFFSET(0x956A840)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int BoundsField_TypeDefinitionIndex = 35649;

	class BoundsField : public Il2CppObject
	{
	public:
		::RuntimeInspectorNamespace::Vector3Field* inputCenter; // 0x78
		::RuntimeInspectorNamespace::Vector3Field* inputExtents; // 0x80
		::System::Reflection::MemberInfo* centerVariable; // 0x88
		::System::Reflection::MemberInfo* extentsVariable; // 0x90
		::System::Reflection::MemberInfo* intCenterVariable; // 0x98
		::System::Reflection::MemberInfo* intSizeVariable; // 0xA0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSFIELD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnSkinChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSFIELD_ONSKINCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnDepthChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSFIELD_ONDEPTHCHANGED_OFFSET))(nullptr);
		}

		::System::Single get_HeightMultiplier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSFIELD_GET_HEIGHTMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Boolean SupportsType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSFIELD_SUPPORTSTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSFIELD_REFRESH_OFFSET))(nullptr);
		}

		::System::Void OnBound(::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSFIELD_ONBOUND_OFFSET))(arg, nullptr);
		}

		::System::Void OnInspectorChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSFIELD_ONINSPECTORCHANGED_OFFSET))(nullptr);
		}

	};
}

