#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_MATHUTILS_INTLENGTH_OFFSET UNITYSDK_OFFSET(0x94B1240)
#define NEWTONSOFT_JSON_UTILITIES_MATHUTILS_INTTOHEX_OFFSET UNITYSDK_OFFSET(0x94B13B0)
#define NEWTONSOFT_JSON_UTILITIES_MATHUTILS_MIN_OFFSET UNITYSDK_OFFSET(0x94B13C0)
#define NEWTONSOFT_JSON_UTILITIES_MATHUTILS_MAX_OFFSET UNITYSDK_OFFSET(0x94B14C0)
#define NEWTONSOFT_JSON_UTILITIES_MATHUTILS_MAX_OFFSET UNITYSDK_OFFSET(0x94B15C0)
#define NEWTONSOFT_JSON_UTILITIES_MATHUTILS_APPROXEQUALS_OFFSET UNITYSDK_OFFSET(0x94B1690)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int MathUtils_TypeDefinitionIndex = 31879;

	class MathUtils : public Il2CppObject
	{
	public:
		::System::Int32 IntLength(::System::UInt64 arg)
		{
			return (return (::System::Int32(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MATHUTILS_INTLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Char IntToHex(::System::Int32 arg)
		{
			return (return (::System::Char(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MATHUTILS_INTTOHEX_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Min(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MATHUTILS_MIN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Max(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MATHUTILS_MAX_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Max(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MATHUTILS_MAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ApproxEquals(::System::Double arg, ::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MATHUTILS_APPROXEQUALS_OFFSET))(arg, arg, nullptr);
		}

	};
}

