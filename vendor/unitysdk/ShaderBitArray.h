#pragma once
#include "unitysdk.h"

#define SHADERBITARRAY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA05D010)
#define SHADERBITARRAY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA05D050)
#define SHADERBITARRAY_GET_ELEMLENGTH_OFFSET UNITYSDK_OFFSET(0xA05D210)
#define SHADERBITARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA05D220)
#define SHADERBITARRAY_GETELEMENTINDEXANDBITOFFSET_OFFSET UNITYSDK_OFFSET(0xA05D270)
#define SHADERBITARRAY_GET_BITCAPACITY_OFFSET UNITYSDK_OFFSET(0xA05D1C0)
#define SHADERBITARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA05D1E0)
#define SHADERBITARRAY_RESIZE_OFFSET UNITYSDK_OFFSET(0xA05D280)
#define SHADERBITARRAY_GET_DATA_OFFSET UNITYSDK_OFFSET(0xA05D3C0)

	inline static constexpr unsigned int ShaderBitArray_TypeDefinitionIndex = 32655;

	class ShaderBitArray : public Il2CppObject
	{
	public:
		::System::Int32 k_BitsPerElement; // 0x0
		::System::Int32 k_ElementShift; // 0x0
		::System::Int32 k_ElementMask; // 0x0
		::Il2CppArray<::System::Object*>* m_Data; // 0x10

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERBITARRAY_CLEAR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERBITARRAY_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 get_elemLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERBITARRAY_GET_ELEMLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SHADERBITARRAY_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetElementIndexAndBitOffset(::System::Int32 arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Int32, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERBITARRAY_GETELEMENTINDEXANDBITOFFSET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_bitCapacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERBITARRAY_GET_BITCAPACITY_OFFSET))(nullptr);
		}

		::System::Boolean get_Item(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SHADERBITARRAY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void Resize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SHADERBITARRAY_RESIZE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_data()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERBITARRAY_GET_DATA_OFFSET))(nullptr);
		}

	};

