#pragma once
#include "unitysdk.h"

#define TYPEINFO`1_MEASUREARRAYDATABYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define TYPEINFO`1_MEASUREARRAY2DDATABYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define TYPEINFO`1_MEASUREARRAY3DDATABYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define TYPEINFO`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int TypeInfo`1_TypeDefinitionIndex = 37762;

	class TypeInfo`1 : public Il2CppObject
	{
	public:
		::System::Int32 ArrayDataByteOffset; // 0x0
		::System::Int32 Array2DDataByteOffset; // 0x0
		::System::Int32 Array3DDataByteOffset; // 0x0

		::System::Int32 MeasureArrayDataByteOffset()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPEINFO`1_MEASUREARRAYDATABYTEOFFSET_OFFSET))(nullptr);
		}

		::System::Int32 MeasureArray2DDataByteOffset()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPEINFO`1_MEASUREARRAY2DDATABYTEOFFSET_OFFSET))(nullptr);
		}

		::System::Int32 MeasureArray3DDataByteOffset()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPEINFO`1_MEASUREARRAY3DDATABYTEOFFSET_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPEINFO`1_.CCTOR_OFFSET))(nullptr);
		}

	};

