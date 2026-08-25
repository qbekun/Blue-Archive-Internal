#pragma once
#include "../unitysdk.h"

#define NPA_NXPINSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BC4560)
#define NPA_NXPINSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BC4570)
#define NPA_NXPINSET_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x9BC45B0)
#define NPA_NXPINSET_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x9BC45C0)
#define NPA_NXPINSET_GET_TOP_OFFSET UNITYSDK_OFFSET(0x9BC45D0)
#define NPA_NXPINSET_SET_TOP_OFFSET UNITYSDK_OFFSET(0x9BC45E0)
#define NPA_NXPINSET_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x9BC45F0)
#define NPA_NXPINSET_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x9BC4600)
#define NPA_NXPINSET_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x9BC4610)
#define NPA_NXPINSET_SET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x9BC4620)
#define NPA_NXPINSET_TOFLATTENEDSTRING_OFFSET UNITYSDK_OFFSET(0x9BC4630)
#define NPA_NXPINSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BC4710)

namespace NPA
{
	inline static constexpr unsigned int NXPInset_TypeDefinitionIndex = 25587;

	class NXPInset : public Il2CppObject
	{
	public:
		::System::Int32 left; // 0x10
		::System::Int32 top; // 0x14
		::System::Int32 right; // 0x18
		::System::Int32 bottom; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINSET_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_Left()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINSET_GET_LEFT_OFFSET))(nullptr);
		}

		::System::Void set_Left(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINSET_SET_LEFT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Top()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINSET_GET_TOP_OFFSET))(nullptr);
		}

		::System::Void set_Top(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINSET_SET_TOP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Right()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINSET_GET_RIGHT_OFFSET))(nullptr);
		}

		::System::Void set_Right(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINSET_SET_RIGHT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Bottom()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINSET_GET_BOTTOM_OFFSET))(nullptr);
		}

		::System::Void set_Bottom(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINSET_SET_BOTTOM_OFFSET))(arg, nullptr);
		}

		::System::String* ToFlattenedString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINSET_TOFLATTENEDSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINSET_TOSTRING_OFFSET))(nullptr);
		}

	};
}

